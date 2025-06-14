#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>

int main()
{
	int ids[6] = {1,2,3,4,5};

	//the same as for(int i = 0; i < .. ; i++)
	for (int item : ids)   // For every item in the array we're printing out item  --> engros le code ci contre equivaut a une loop sur le tableau ci dessus. On affiche ici un par un les éléments du tableau. Probleme est que c'est imprécis car ne prend par en compte les index comme un for loop conventionnem 
	{ 
	   std::cout << item << std::endl;
     }
}

