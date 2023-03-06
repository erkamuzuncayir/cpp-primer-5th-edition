/* Chapter 2 - Exercise 14

Exercise 2.14: Is the following program legal? 
If so, what values are printed?

int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
sum += i;
std::cout << i << " " << sum << std::endl;

*/

#include <iostream>

int main()
{
    int i = 100, sum = 0;
    
    for (int i = 0; i != 10; ++i)
        sum += i;
    
    // It is legal. Values are 100 and 45, respectively.
    std::cout << i << " " << sum << std::endl;

	return 0;
}