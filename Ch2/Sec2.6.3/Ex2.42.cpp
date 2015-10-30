#include <iostream>
// #include <string>
#include "Sales_data.h"

int main()
{
	Sales_data book1, book2;
	double price1, price2;

	std::cout << "Please input 1st book ISBN, units sold, and price (separated by space)" << std::endl;
	std::cin >> book1.bookNo >> book1.units_sold >> price1;
	book1.revenue = book1.units_sold * price1;
	
	std::cout << "Please input 2nd book ISBN, units sold, and price (separated by space)" << std::endl;
	std::cin >> book2.bookNo >> book2.units_sold >> price2;
	book2.revenue = book2.units_sold * price2;

	if (book1.bookNo == book2.bookNo)
	{
		std::cout << "The books of ISBN " << book1.bookNo << " total units sold " << book1.units_sold + book2.units_sold
		<< " with total revenue " << book1.revenue + book2.revenue << std::endl;
	} else {
		std::cerr << "Data must refer to same ISBN" << std::endl;
		return -1;
	}
	
	return 0;	
}