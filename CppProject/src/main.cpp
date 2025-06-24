#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <limits>

int main()
{ 
	int i = 0;
  while (i < 10)
{ 
	std::cout << i << std::endl;
	i++;
}  // the same as for (int i = 0; i < 10; i++)
  //while (condition) is the same as for(;condition;)
  do {
	  std::cout << i << std::endl;
	  i++;
  } while (i < 10);
} // "do while" will do the code in the {} at least once before checking the conditions