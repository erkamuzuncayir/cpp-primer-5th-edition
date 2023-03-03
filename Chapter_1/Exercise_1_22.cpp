/* Chapter 1 - Exercise 22

Exercise 1.22: Write a program that reads several transactions for the same ISBN . Write the sum of all the transactions that were read.

*/

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book;
	Sales_item sumOfTransactions;
	while( std::cin >> book )
		sumOfTransactions += book;

	std::cout << sumOfTransactions << std::endl;		
	return 0;
}
