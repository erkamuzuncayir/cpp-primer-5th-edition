/* Chapter 1 - Exercise 10

Exercise 1.10: In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (-- ) that subtracts 1 . Use the decrement operator to write a while that prints the numbers from ten down to zero.

*/

#include <iostream>

int main()
{
	int sum = 0;
	int count = 10;
	
	while( count > 0 )
	{
		sum += count--;
	}
	
	std::cout << sum << std::endl;
	return 0;
}
