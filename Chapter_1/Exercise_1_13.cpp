/* Chapter 1 - Exercise 13

Exercise 1.13: Rewrite the first two exercises from § 1.4.1 (p. 13 ) using for loops.

*/

#include <iostream>

int main()
{
	int sum = 0;
	
	for( int i = 0; i <= 10; i++ )
	{
		sum += i;
	}
	
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	
	return 0;
}
