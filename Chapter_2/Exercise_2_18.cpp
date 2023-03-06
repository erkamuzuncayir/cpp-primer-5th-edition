/* Chapter 2 - Exercise 18

Exercise 2.18: Write code to change the value of a pointer. 
Write code to change the value to which the pointer points.

*/

#include <iostream>

int main()
{
    int objOne = 5, objTwo = 10, objThree = 15;
    int *p = &objOne, *pNew = &objThree;


    *p = objTwo;
    std::cout << "Value of variable that pointed by p" << *p << std::endl;
    std::cout << "Address of variable pointed by p" << p << std::endl;

    p = &objThree;
    std::cout << "Value of variable that pointed by p" << *p << std::endl;
    std::cout << "Address of variable pointed by p" << p << std::endl;

	return 0;
}