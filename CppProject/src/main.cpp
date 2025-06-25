#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>

int main()
{
	int age = 12;

/*	if (age == 6)
	{
		std::cout << "go to elementary school" << std::endl;
	}
	else if (age == 12)
	{
		std::cout << "go to middle school" << std::endl;
	}
	else if (age == 15)
	{
		std::cout << "go to high school" << std::endl;
	}
	else
	{
		std::cout << "stay at your school" << std::endl;
	}
	*/

	switch (age)
	{
	case 6:
		std::cout << "go to elementary school" << std::endl;
		break;
	case 12:
		std::cout << "go to middle school" << std::endl;
		break;
	case 15:
		std::cout << "go to high school" << std::endl;
		break;
	default:
	 	std::cout << "stay at your school" << std::endl;
	}
} 
