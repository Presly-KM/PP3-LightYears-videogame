#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>

int main()
{
	enum Mood
	  {
		// enum are basically named integers
		Happy,   // defaults to 0
		Angry,   // defaults to the prebious one + 1
		Sad      // same...
	  };

	//creat a variable of the enum type Mood, and git it a value of Happy                 // Donc enum a la capacité de créer des types tout comme int est un type, tout comme char, tout comme float etc
	Mood mood = Happy;

	int moodInInt = mood;

	switch (moodInInt)
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
