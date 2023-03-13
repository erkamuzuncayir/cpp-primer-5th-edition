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
    Sales_data total;

    if ( std::cin >> total.bookNo >> total.units_sold >> total.price )
    {
        Sales_data temp; // variable to hold the running sum
        
        while( std::cin >> temp.bookNo >> temp.units_sold )
        {
            if( total.bookNo == temp.bookNo )
                total.units_sold += temp.units_sold;
            else
            {
                total.revenue = total.units_sold * total.price;
                std::cout << total.bookNo << " revenue is " << total.revenue << std::endl;
                total = temp;
            }
        }

        std::cout << total.bookNo << " revenue is " << total.revenue << std::endl;
    }
    else
    {
        std::cerr << "No data!" << std::endl;

        return -1;
    }

    return 0;

}