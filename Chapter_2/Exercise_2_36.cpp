/* Chapter 2 - Exercise 36

Exercise 2.36: In the following code, determine the type of each variable and the value each variable has when the code finishes:

*/

#include <iostream>

int main()
{

    int a = 3, b = 4;
    decltype(a) c = a; // c is an int variable.
    decltype((b)) d = a; // d is an int& *reference* variable
    ++c;
    ++d;
    
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;

	return 0;
}