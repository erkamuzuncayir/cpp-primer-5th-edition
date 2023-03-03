/* Chapter 1 - Exercise 16

Exercise 1.16: Write your own version of a program that prints the sum of a set of integers read from cin

*/

#include <iostream>

int main()
{
	int sum = 0;
	int input = 0;
	
	while( std::cin >> input )
	{
		sum += input;
	}
	
	std::cout << sum << std::endl;
	return 0;
}
