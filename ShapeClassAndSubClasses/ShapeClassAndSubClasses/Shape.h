#pragma once
#include <string>

class Shape
{
public:
	std::string Color;
	float getArea()
	{
		// subclasses will utilize this method to return area
	};
};

