#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>

int main()
{
	int ids[6] = { 1,2,3,4,5 }; //the same as int ids[6] = {1,2,3,4,5,0}
	for (int i = sizeof(ids) / sizeof(int) - 1; i >= 0; i--)
	{
		//std::cout << ids[i] << std::endl;
	}

	//the same as for(int i = 0; i < sizeof(ids) / sizeof(int); i++)
	//{std::cout << ids[i] << std::endl;}
	// Down size of this is that the index is not here.
	// this is called a foreach
	for (int item : ids)                                        // autre manière d'incrementer sans les problemes  d'index et de off by one
	{
		//std::cout << item << std::endl;                         // Il indique ici 1,2,3,4,5,0 ! En effet n'oublions pas que ids indique ici 6 éléments au sein du tableau (int ids[6])
	}

	// vector type gives error for "off by one" problem if we put "<=" to prevent that problem we put "<" operator
	std::vector<int> idsVec = { 1,2,3,4,5 };
	for (int i = 0; i < idsVec.size(); i++)                       
	{
		//std::cout << idsVec[i] << std::endl;                      // Il indique ici 1,2,3,4,5 ! L'incrémentation se fait le plus facilement posisble sans probleme d'index. Pas de problème ici non plus ; Trés simple ! 
	}


	for (int item : idsVec)
	{
		std::cout << item << std::endl;                             // Ici aussi pas de probleme : 1,2,3,4,5
	}
}