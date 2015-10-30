#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

class Sales_data;
std::istream &read(std::istream &, Sales_data &);

class Sales_data {

// friendship declarations
friend std::istream &read(std::istream &is, Sales_data &item);
friend std::ostream &print(std::ostream &os, const Sales_data &item);
friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

public:
	// constructors
	Sales_data() = default;  // C++11 feature
	Sales_data(const std::string &s): bookNo(s) { }
	Sales_data(const std::string &s, unsigned n, double p):
		bookNo(s), units_sold(n), revenue(p*n) { }
	Sales_data(std::istream &is) {read(is, *this);}
	
	// member functions
	std::string isbn() const {return bookNo;}
	Sales_data &combine(const Sales_data&);  // declaration
	double avg_price() const;   // declaration
	
private:
	// data members
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	
};


// member functions
inline 
double Sales_data::avg_price() const
{
	if (units_sold)
		return revenue/units_sold;
	else
		return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}


// nonmember functions declarations:
// std::istream &read(std::istream &is, Sales_data &item);
// std::ostream &print(std::ostream &os, const Sales_data &item);
// Sales_data add(const Sales_data &lhs, const Sales_data &rhs);


// nonmember functions:
// should be in a separate file and linked later
std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}



#endif

