#include <iostream>

int main()
{
	std::string msg = "hello steve";  // sequence of characters

	int age = 2023;

	float tempreture = 72.6;

	char characterA = 'A';
	char charactera = 'a';

	bool lightIsOn = false;
	bool boolFromNum = true;

	std::cout << msg << " " << age << "the tempreture is: " << tempreture << std::endl;

	std::cout << lightIsOn << std::endl;

	std::cout << boolFromNum << std::endl;

	std::cout << "the size of int is:" << sizeof(int) << std::endl;

}