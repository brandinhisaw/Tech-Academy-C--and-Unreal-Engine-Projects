#pragma once

#include "Handle.h"
#include "sqlite3.h"

#ifdef _DEBUG
#define VERIFY ASSERT
#define VERIFY_(result, expression) ASSERT(result == expression)
#else
#define VERIFY(expression) (expression)
#define VERIFY_(result, expression) (expression)
#endif

struct Exception
{
	int Result = 0;
	std::string Message;

	explicit Exception(sqlite3* const connection) :
		Result(sqlite3_extended_errcode(connection)),
		Message(sqlite3_errmsg(connection))
	{}
};

class Connection
{
	struct ConnectionHandleTraits : HandleTraits<sqlite3*>
	{
		static void Close(Type value) noexcept
		{
			VERIFY_(SQLITE_OK, sqlite3_close(value));
		}
	};

	using ConnectionHandle = Handle<ConnectionHandleTraits>;
	ConnectionHandle m_handle;

	template <typename F, typename C>
	void InternalOpen(F open, C const* const filename)
	{
		Connection temp;

		if (SQLITE_OK != open(filename, temp.m_handle.Set()))
		{
			temp.ThrowLastError();
		}

		swap(m_handle, temp.m_handle);
	}

public:

	Connection() noexcept = default;

	template <typename C>
	explicit Connection(C const* const filename)
	{
		Open(filename);
	}

	static Connection Memory()
	{
		return Connection(":memory:");
	}

	static Connection WideMemory()
	{
		return Connection(L":memory:");
	}
	
	explicit operator bool() const noexcept
	{
		return static_cast<bool>(m_handle);
	}

	sqlite3 * GetAbi() const noexcept
	{
		return m_handle.Get();
	}

	__declspec(noreturn) void ThrowLastError() const
	{
		throw Exception(GetAbi());
	}

	void Open(char const* const filename)
	{
		InternalOpen(sqlite3_open, filename);
	}

	void Open(wchar_t const* const filename)
	{
		InternalOpen(sqlite3_open16, filename);
	}

};

template <typename T>
struct Reader
{
	int GetInt(int const column = 0) const noexcept
	{
		return sqlite3_column_int(static_cast<T const *>(this)->GetAbi(), column);
	}

	char const * GetString(int const column = 0) const noexcept
	{
		return reinterpret_cast<char const*>(sqlite3_column_text(
			static_cast<T const*>(this)->GetAbi(), column));
	}

	wchar_t const * GetWideString(int const column = 0) const noexcept
	{
		return reinterpret_cast<wchar_t const*>(sqlite3_column_text16(
			static_cast<T const*>(this)->GetAbi(), column));
	}

	int GetStringLength(int const column = 0) const noexcept
	{
		return sqlite3_column_bytes(static_cast<T const*>(this)->GetAbi(), column);
	}

	int GetWideStringLength(int const column = 0) const noexcept
	{
		return sqlite3_column_bytes16(static_cast<T const*>(this)->GetAbi(), column) / sizeof(wchar_t);
	}
};

class Row : public Reader<Row>
{
	sqlite3_stmt* m_statement = nullptr;

public:

	sqlite3_stmt* GetAbi() const noexcept
	{
		return m_statement;
	}

	Row(sqlite3_stmt* const statement) noexcept :
		m_statement(statement)
	{}
};

class Statement : public Reader<Statement>
{
	struct StatementHandleTraits : HandleTraits<sqlite3_stmt *>
	{
		static void Close(Type value) noexcept
		{
			VERIFY_(SQLITE_OK, sqlite3_finalize(value));
		}
	};

	using StatementHandle = Handle<StatementHandleTraits>;
	StatementHandle m_handle;

	template <typename F, typename C>
	void InternalPrepare(Connection const& connection, F prepare, C const* const text)
	{
		ASSERT(connection);

		if (SQLITE_OK != prepare(connection.GetAbi(), text, -1, m_handle.Set(), nullptr))
		{
			connection.ThrowLastError();
		}
	}

public:

	Statement() noexcept = default;

	explicit operator bool() const noexcept
	{
		return static_cast<bool>(m_handle);
	}

	sqlite3_stmt * GetAbi() const noexcept
	{
		return m_handle.Get();
	}

	__declspec(noreturn) void ThrowLastError() const
	{
		throw Exception(sqlite3_db_handle(GetAbi()));
	}

	void Prepare(Connection const & connection, char const* const text)
	{
		InternalPrepare(connection, sqlite3_prepare_v2, text);
	}

	void Prepare(Connection const & connection, wchar_t const* const text)
	{
		InternalPrepare(connection, sqlite3_prepare16_v2, text);
	}

	bool Step() const
	{
		int const result = sqlite3_step(GetAbi());

		if (result == SQLITE_ROW) return true;
		if (result == SQLITE_DONE) return false;

		ThrowLastError();
	}

	void Execute() const
	{
		VERIFY(!Step());
	}

	void Bind(int const index, int const value) const
	{
		if (SQLITE_OK != sqlite3_bind_int(GetAbi(), index, value))
		{
			ThrowLastError();
		}
	}

	void Bind(int const index, char const* const value, int const size = -1) const
	{
		if (SQLITE_OK != sqlite3_bind_text(GetAbi(), index, value, size, SQLITE_STATIC))
		{
			ThrowLastError();
		}
	}

	void Bind(int const index, wchar_t const* const value, int const size = -1) const
	{
		if (SQLITE_OK != sqlite3_bind_text(GetAbi(), index, value, size, SQLITE_STATIC))
		{
			ThrowLastError();
		}
	}
};

class RowIterator
{
	Statement const* m_statement = nullptr;

public:

	RowIterator() noexcept = default;

	RowIterator(Statement const & statement) noexcept
	{
		if (statement.Step())
		{
			m_statement = &statement;
		}
	}

	RowIterator & operator++() noexcept
	{
		if (!m_statement->Step())
		{
			m_statement = nullptr;
		}

		return *this;
	}

	bool operator !=(RowIterator const & other) const noexcept
	{
		return m_statement != other.m_statement;
	}

	Row operator *() const noexcept
	{
		return Row(m_statement->GetAbi());
	}
};

inline RowIterator begin(Statement const & statement) noexcept
{
	return RowIterator(statement);
}

inline RowIterator end(Statement const&) noexcept
{
	return RowIterator();
}

