#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>

int main()
{
	// convert miles to Kilometers 
	// take input from the user, ask a distance in Miles 
	// convert that distance to kilometres and cout the value
	 

	// const mean that the value is not changeable. It is set to the value you give it.
	const float CONVERSION = 1.609344;

	std::cout << "Please type in the distance in Miles : \n>>>";   
	
	float miles=0;    //important d'initilaiser à 0 car sinon on siat pas comment l'ordinateur peut interpreter la variable de manière automatique
	std::cin >> miles;                                       // Ici quand la console va s'afficher ce sera a moi donc de taper au sein meme de la console, la donnée que je souhaite convertir en kilos

	// input error handling
	while (!std::cin.good())  // Si qcch ne va pas. Si l'input n'est pas entré correctemement
	{
		std::cin.clear();    // supprime l'input qu'on a entré dans la console 
		std::cin.ignore(std::numeric_limits<std:: streamsize>::max(), '\n'); // On définit la limite de scaractères qu'on est autorisées à entrer dans la console
   
	    std::cout << "Error Input! Please give a number:\n>>>";
	    std::cin >> miles;
	}
 
	
std::cout << "The distance in kilometers is: " << miles * CONVERSION << std::endl; // La distance en kilomètres est = miles x CONVERSION !

}