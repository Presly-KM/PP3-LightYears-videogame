#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>

int main()
{
	int age;
	std::cout << "please type in your age: " << std::endl;
	std::cin >> age;                            // cin permet de rentrer des input

	std::cin.clear(); // to clear the error tell the buffer that everithing is okay
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore the next 10000000 amount of characters or until hit a new line
	
	std::string name ;
	std::cout << "what is your name: " << std::endl;
	std::getline(std::cin, name);


	std::cout << "hello " << age << " years old " << name << std::endl;
}    

