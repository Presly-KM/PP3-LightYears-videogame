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

	std::cout << "the size of IDs is: " << sizeof(IDs) / sizeof(int) << std::endl;
	std::cout << "this size of IDVec is: " << IDVec.size() << std::endl;
  
	//vector can grow and shrink
	//grow
	IDVec.push_back(1534);
	std::cout << "this last one of IDVec is: " << IDVec.back() << std::endl;
	//insert
	IDVec.insert(IDVec.begin()+1, 1134);
	std::cout << "this first one of IDVec is: " << IDVec.front() << std::endl;
	std::cout << "this second one of IDVec is: " << IDVec[1] << std::endl;

}