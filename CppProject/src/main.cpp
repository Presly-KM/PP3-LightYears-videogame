#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>

int main()
{
	//get the sum of the numbers from 1 to 100
	int sum = 0;

	//for loops keeps looping, or keep calling the code in the {} again and again until the condition is false
	//three things is used in the () of the for loop, divided by the 2;
	// (initialization ; condiiton; incrementation)
	//initialization is called once in the begining of the for loop.
	//condition is checked at the begining of each loop
	//incrementation is called at the end of each loop
	for (int i = 0; i <= 100; i++)
	{
		sum += i;
	}

	std::cout << sum << std::endl;

}

