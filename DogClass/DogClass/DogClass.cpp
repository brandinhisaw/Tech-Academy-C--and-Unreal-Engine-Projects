// DogClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Dog.h"

int main()
{	
	Dog dog;
	dog.Breed = "Hound";
	dog.Color = "Brown";
	dog.Height = "2 feet";
	dog.Weight = "60 pounds";

	dog.Shake();
	dog.Sit();
	dog.LayDown();
}