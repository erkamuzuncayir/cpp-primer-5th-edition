/* Chapter 2 - Exercise 41

Exercise 2.41: Use your Sales_data class to rewrite the exercises in § 1.5.1 (p. 22 ), § 1.5.2 (p. 24 ), and § 1.6 (p. 25 ). For now, you should define your Sales_data class in the same file as your main function.

*/

#include <iostream>

struct Sales_data 
{ 
    std::string bookNo;
    unsigned units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;
};

int main()
{
    Sales_data firstBook;
    std::cin >> firstBook.bookNo >> firstBook.units_sold >> firstBook.price;
    Sales_data secondBook;
    std::cin >> secondBook.bookNo >> secondBook.units_sold >> secondBook.price;

    if( firstBook.bookNo == secondBook.bookNo )
    {
        Sales_data totalOfBook;
        totalOfBook.bookNo = firstBook.bookNo;
        totalOfBook.units_sold = firstBook.units_sold + secondBook.units_sold;
        totalOfBook.price = firstBook.price;
        totalOfBook.revenue = totalOfBook.units_sold * totalOfBook.price;
        std::cout << totalOfBook.bookNo << " revenue is " << totalOfBook.revenue << std::endl;
    
        return 0;
    }
    else
    {
        std::cerr << "Data must refer to same book no." << std::endl;

        return -1;
    }

}