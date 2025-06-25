#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>

int main()
{
	//enum are basically named intergers
	enum class Mood
	  {
		Happy= - 1,  // defaults to 0
		Angry= -2,   // defaults to the prebious one + 1
		Sad = 100    // same...
	  };

	//creat a variable of the enum type Mood, and git it a value of Happy                 // Donc enum a la capacité de créer des types tout comme int est un type, tout comme char, tout comme float etc
	Mood mood = Mood::Happy;           // Nous avons modifié enum Mood (ligne 11) pour qu'il devienne enum class Mood cela aimplqiue qu'il devint un "strong enum type" et plus simplement un "enum type". Ce changement implique que désormais la valeur de Mood mood ne peut plus simplement etre "Happy" ou "Angry" ou "Sad", on maintenant dire  Mood::Happy;   C'est comme si désormais on disait j'ai besoin de la partie "Happy" qui se trouve dans Mood. Plus seulement j'ai besoin de Happy

	int moodInInt = mood;

	Mood moodFromInt = (Mood)-1;
	
	switch (moodFromInt)
	{
	case Happy:
		std::cout << "Happy" << std::endl;
		break;
	case Angry:
		std::cout << "Angry" << std::endl;
		break;
    case Sad:
		std::cout << "Sad" << std::endl;
		break;
	default:
		std::cout << "no mood" << std::endl;
		break;
	}
} 
