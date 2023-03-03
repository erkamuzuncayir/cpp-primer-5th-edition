/* Chapter 1 - Exercise 10

Exercise 1.11: Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.

*/

#include <iostream>

int main()
{
	int numFir, numSec;

	std::cout << "Please enter two integer: ";
	std::cin >> numFir;
	std::cin >> numSec;
	
	while( numFir < numSec - 1 )
	{
		std::cout << ++numFir << " ";		
	}
	
	std::cout <<  std::endl;
	
	return 0;
}
