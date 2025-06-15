#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>

int main()
{
	std::vector<int> idsVec = { 1,2,3,4,5,7,8,9 }; // com test de commentaire vector/int idsVec vector utilitiy be careful cause mistake happen 
	for (int i = 0; i < idsVec.size(); i++) // new line. IdsVec.size
	{
		std::cout << idsVec[i] << std::endl;
	}
}

