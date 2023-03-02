/* Chapter 1 - Exercise 5

Exercise 1.5: We wrote the output in one large statement. Rewrite the program to use a separate statement to print each operand.

*/

#include <iostream>

int main()
{
	int v1 = 0, v2 = 0;
	
	std::cin >> v1;
	std::cin >> v2;
	
	std::cout << "The sum of " << std::endl;
	std::cout << v1 << std::endl;
	std::cout << " and " << std::endl;
	std::cout << v2 << std::endl;
	std::cout << " is " << std::endl;
	std::cout << v1*v2 << std::endl;
	return 0;
}
