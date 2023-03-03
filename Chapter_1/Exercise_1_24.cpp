/* Chapter 1 - Exercise 24

Exercise 1.24: Test the previous program by giving multiple transactions representing multiple ISBN s. The records for each ISBN should be grouped together.

*/

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book;
	Sales_item cur_book;
	
	int transactionCount = 1;
	while( std::cin >> book )
	{
		if( book.isbn() == cur_book.isbn() )
			transactionCount++;
		else
		{
			std::cout << "Transaction count of " <<
			cur_book.isbn() << " is " << 
			transactionCount << std::endl;
			cur_book = book;
			transactionCount = 1;
		}
	}
	return 0;
}
