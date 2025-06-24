#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>

int main()
{
	int ids[] = { 1,2,3,4,5 };
	for (int i = 0; i <= sizeof(ids)/sizeof(int); i++) 
	{
		std::cout << ids[i] << std::endl;                  // La console affiche 5 car ici elle détermine le plus simplement possible, à l'aide de "sizeof(ids)/sizeof(int)", le nombre d'éléments au sein du tableau. Il y'en 5. C'est aussi simple que ça 
	}
}

