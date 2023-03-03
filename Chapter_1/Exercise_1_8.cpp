// Chapter 1 - Exercise 8
//
// Exercise 1.8: Indicate which, if any, of the following 
// output statements are legal:
//
//
// std::cout << "/*";
// std::cout << "*/
// std::cout << /* "*/" */;
// std::cout << /* "*/" /* "/*" */;
//
//

#include <iostream>

int main()
{

	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "*/" */; -> illegal one.
	std::cout << /* "*/" /* "/*" */;

	return 0;
}
