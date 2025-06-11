#include <iostream>
#include <iomanip>
#include <vector>

int main()
{
	//array can hold elements of any type
	//array do not change size
	int IDs[] = { 1234, 1334, 1434 };

	//{..} is called initializer list
	std::vector<int> IDVec = { 1234, 1334, 1434 };

	
	std::cout << "this first one of IDs is: " << IDs[0] << std::endl;
	std::cout << "this first one of IDVec is: " << IDVec[0] << std::endl;

	std::cout << "the last one of IDs is: " << IDs[sizeof(IDs)/sizeof(int) -1] << std::endl;
	std::cout << "this last one of IDVec is: " << IDVec.back() << std::endl;
}