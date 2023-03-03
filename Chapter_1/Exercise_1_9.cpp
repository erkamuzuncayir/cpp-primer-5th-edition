/* Chapter 1 - Exercise 9

Exercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100.

*/

#include <iostream>

int main()
{
	int sum = 0;
	int count = 50;
	
	while( count < 100 )
	{
		sum += count++;
	}
	
	std::cout << sum << std::endl;
	return 0;
}
