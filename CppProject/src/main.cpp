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
	for (int item : ids)                                        // autre manière d'incrementer sans les problemes  d'index et de off by one
	{
		std::cout << item << std::endl;                         // Il indique ici 1,2,3,4,5,0 ! En effet n'oublions pas que ids indique ici 6 éléments au sein du tableau (int ids[6])
	}
}