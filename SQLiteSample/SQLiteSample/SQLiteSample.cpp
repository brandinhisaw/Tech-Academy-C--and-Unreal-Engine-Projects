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
	}
	catch (Exception const & e)
	{
		printf("%s (%d)\n)", e.Message.c_str(), e.Result);
	}
}