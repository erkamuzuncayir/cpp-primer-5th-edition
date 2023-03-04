/* Chapter 2 - Exercise 4

Exercise 2.4: Write a program to check whether your predictions were correct. If not, study this section until you understand what the problem is.

Solution:

32
4294967264 -> Because u2 converted to an unsigned value and, it means it's value turned to modulo of maximum unsigned int value.
32
-32
0
0

*/

#include <iostream>

int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;

    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;

	return 0;
}