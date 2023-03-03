/* Chapter 1 - Exercise 19

Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p. 13 ) that printed a range of numbers so that it handles input in which the first number is smaller than the second.

*/

#include <iostream>

int main()
{
	int low, high, temp;

	std::cout << "Please enter two integer: ";
	std::cin >> low;
	std::cin >> high;
	
	if( low > high )
	{
		temp = low;
		low = high;
		high = temp;
	}
	
	while( low < high - 1 )
	{
		std::cout << ++low << " ";		
	}
	
	std::cout << std::endl;
	
	return 0;
}
