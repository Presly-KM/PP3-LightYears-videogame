#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>

//creates a function called printHelloword
void printHelloWord()
{
	//body of the function
	std::cout << "hello world" << std::endl;
}

void printMsg(std::string msg, bool newLine)  // the signature of a function
{
	std::cout << msg;
	if (newLine)
	{
		std::cout << std::endl;
	}
}



int main() //this is the entry point, where the program starts.
{
	printHelloWord(); // call the helloWorld smallest one

	printMsg("hello David!", true);

}