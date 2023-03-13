/* Chapter 2 - Exercise 39

Exercise 2.39: Compile the following program to see what happens when you forget the semicolon after a class definition. Remember the message for future reference.

*/

#include <iostream>

struct Foo { /* empty */ } // Note: no semicolon 

int main()
{
    return 0;
}