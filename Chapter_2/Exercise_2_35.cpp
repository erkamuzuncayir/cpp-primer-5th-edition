/* Chapter 2 - Exercise 35

Exercise 2.35: Determine the types deduced in each of the following definitions. Once you’ve figured out the types, write a program to see whether you were correct.


*/

#include <iostream>

int main()
{
    /*
    * const int i = 42;
    * auto j = i; const auto &k = i; auto *p = &i;
    * j -> int, top-level const is dropped
    * k -> const int reference
    * p -> const int pointer
    * const auto j2 = i, &k2 = i;
    * j2 -> const int, top-level const deduced 
    * k2 -> const int reference
    */

    const int i = 42;
    auto j = i; const auto &k = i; auto *p = &i;
    const auto j2 = i, &k2 = i;

    std::cout << "j is " << typeid(j).name() << std::endl;
    std::cout << "k is " << typeid(k).name() << std::endl;
    std::cout << "p is " << typeid(p).name() << std::endl;
    std::cout << "j2 is " << typeid(j2).name() << std::endl;
    std::cout << "k2 is " << typeid(k2).name() << std::endl;
    
	return 0;
}