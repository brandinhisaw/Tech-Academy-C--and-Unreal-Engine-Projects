#pragma once
#include <string>
#include <iostream>

class Dog
{
public:
	std::string Breed;
	std::string Color;
	std::string Height;
	std::string Weight;
	void Shake()
	{
		std::cout << "The dog shakes.\n" ;
	};
	void Sit()
	{
		std::cout << "The dog sits.\n";
	};
	void LayDown()
	{
		std::cout << "The dog lays down.\n";
	};
};

