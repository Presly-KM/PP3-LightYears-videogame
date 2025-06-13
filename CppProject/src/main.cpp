#include <iostream>
#include <iomanip>
#include <vector>
#include <map>


int main()
{
	//Arithmetic Operators 
	//+,-, * , /, %
	float a = 10;
	float b = 10;

	float c = a + b;
	float d = a - b;
	float e = a * b;
	float f = a / b;

	int g = 0.6; // assignement operator, if assign float to int, you lose precision, anything after the . will be descarded.

	//float h = a % b; // gives the reminder

	a += b; // the same as a = a + b;
	a -= b; // the same as a = a - b

	a /= b;
	a *= b;

	a++;
	int h = --a; // the same as a-=1; or a = a + 1;
	std::cout << h << std::endl;

	++a; // the same as a+=1; or a = a + 1;
	--a; // the same as a-=1; or a = a - 1;


   bool aEqualb = a == b; // comparison
   bool aNotEqualb = a != b; // comparison
   bool aSmallerThanb = a <= b;
   bool aBiggerThanb = a >= b;

   bool bothTrue = aEqualb && aNotEqualb; //both has to be true ti be returning true.
   bool eitherTrue = (aEqualb || aBiggerThanb) && aNotEqualb; // any trye will return true ; will be false if both are false. 

   std::cout << eitherTrue << std::endl;


}    

