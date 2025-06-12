#include <iostream>
#include <iomanip>
#include <vector>
#include <map>


int main()
{
	std::map<std::string, int> IDs{ {"Steve", 1234 }, { "Adam", 1334 }, { "Ado", 1434 } }; // key,valeur. 
	//use the keys instead of index to find a value
	std::cout << IDs["Steve"] << std::endl;

	IDs["Adam"] = 1544;
	std::cout << IDs["Adam"] << std::endl;

	//insert
	IDs.insert({ "Leon", 1644 });
	std::cout << IDs["Leon"] << std::endl;

	IDs.erase("Leon"); // this erase erases the Leon key value from the map
	std::cout << "the size of IDs is " << IDs.size() << std::endl;

	std::cout << IDs["Leon"] << std::endl; // this one actually checks if "Leon" exists, if not, it adds a Leon basically doing IDs.insert({"Leon", 0});
	std::cout << "the size of IDs is " << IDs.size() << std::endl;

	IDs.clear(); //remove every thing
	std::cout << "the size of IDs is " << IDs.size() << std::endl;

	// ==. != are operators, ther are others operators : + - / * etc
	bool Exists = IDs.find("Leon") != IDs.end();
	std::cout << Exists << std::endl;                  //La console retourne ici false (car 0=false)
}     
