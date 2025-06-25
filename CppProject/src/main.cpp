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
		Happy,
		Angry,
		Sad
	  };

	//creat a variable of the enum type Mood, and git it a value of Happy                 // Donc enum a la capacité de créer des types tout comme int est un type, tout comme char, tout comme float etc
	Mood mood = Happy;

	switch (mood)
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
