// Sec 7.1.2 Ex 7.5

#ifndef PERSON_H
#define PERSON_H

#include <string>

struct Person {
	// data members
	std::string name;
	std::string address;
	
	// member functions
	std::string get_name() const {return name;}
	std::string get_address() const {return address;}
};


#endif
