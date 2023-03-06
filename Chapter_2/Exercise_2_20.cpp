/* Chapter 2 - Exercise 20

Exercise 2.20: What does the following program do?


*/

#include <iostream>

int main()
{
    // Create a variable named i.
    int i = 42;
    // Create a pointer variable and assign i to it.
    int *p1 = &i;
    // It takes square root of i.
    *p1 = *p1 * *p1;
	
    return 0;
}