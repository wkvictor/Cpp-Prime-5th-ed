//#include <iostream>
//#include <string>
#include "Sales_data.h"

using namespace std;

int main()
{
	Sales_data item1;
	print(cout, item1) << endl;
	
	Sales_data item2("07-27-2015KW");
	print(cout, item2) << endl;
	
	Sales_data item3("07-27-2015KW", 3, 15.00);
	print(cout, item3) << endl;
	
	Sales_data item4(cin);
	print(cout, item4) << endl;
	
	return 0;
} 
