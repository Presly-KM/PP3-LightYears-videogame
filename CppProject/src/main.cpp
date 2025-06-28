#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>

//creates a function called printHelloword
void printHelloWord()
{
	//body of the function
	printMsg("hello world!", true);
}

std::vector<int> generateRandomNumbers()  // Le "std::vector<int>" au lieu du "void" habituel devant le nom de la fonction signifie que la focntion ci-contre va retourner un vecteur (vector)
{
	std::vector<int> randomNumbers;

	std::srand(std::time(nullptr));

	for (int i = 0; i < 12; ++i)
	{
		int number = std::rand() % 100 - 50;
		randomNumbers.push_back(number);
		std::cout << number << " ";
	}

	return randomNumbers;
}

void printMsg(std::string msg, bool newLine)  // the signature of a function
{
	std::cout << msg;
	if (newLine)
	{
		std::cout << std::endl;
	}
}


int main() //this is the entry point, where the program starts.
{
	printHelloWord(); // call the helloWorld smallest one

	printMsg("hello David!", true);

	// give a sequence of numbers, fint the smallest one.
	std::vector<int> randomNumbers = generateRandomNumbers(); // Ici le vecteur du nom de randomNumbers obtient le randomNumber par l'appelle de la fonction chargée de générer un randomNumber

}