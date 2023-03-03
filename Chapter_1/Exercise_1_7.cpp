/* Chapter 1 - Exercise 7

Exercise 1.7: Compile a program that has incorrectly nested comments.

*/

#include <iostream>

int main()
{
	/*
	* Comments were correct
	* until /* */ now.
	*
	*
	*/
	std::cout << "This program incorrectly nested." << std::endl;
	return 0;
}
