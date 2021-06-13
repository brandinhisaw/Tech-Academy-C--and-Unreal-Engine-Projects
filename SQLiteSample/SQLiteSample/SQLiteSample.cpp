// SQLiteSample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <string>
#include "SQLite.h"

int main()
{
	try
	{
		Connection connection = Connection::Memory();

		Statement statement;

		statement.Prepare(connection, L"select 'Hello World'");

		while (statement.Step())
		{
			wchar_t const * w = statement.GetWideString(0);
			int length = statement.GetWideStringLength(0);

			printf("%ls (%d)\n", w, length);
		}
	}
	catch (Exception const & e)
	{
		printf("%s (%d)\n)", e.Message.c_str(), e.Result);
	}
}