#include <iostream>
#include "Sales_item.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Sales_item total;
	
	if(std::cin >> total){
		Sales_item trans;
		
		while (std::cin >> trans){
			if (trans.isbn() == total.isbn())
			{
				total += trans;
			} else {
				std::cout << total << std::endl;
				total = trans;
			}
		}
		
		std::cout << total << std::endl;
		
	} else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	
	return 0;
}
