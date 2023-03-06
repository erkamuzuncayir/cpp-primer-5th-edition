/* Chapter 2 - Exercise 17

Exercise 2.17: What does the following code print?

*/

#include <iostream>

int main()
{
    int i, &ri = i;
    i = 5; ri = 10;
    
    // It will print 10 and 10, respectively.
    std::cout << i << " " << ri << std::endl;

	return 0;
}