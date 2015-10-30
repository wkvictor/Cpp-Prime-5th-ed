// Sec 7.1.3 Ex 7.9

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

struct Person {
	// data members
	std::string name;
	std::string address;
	
	// member functions
	std::string get_name() const {return name;}
	std::string get_address() const {return address;}
};

// NOTICE: nonmember functions should be declared here, but not defined.
// Should be defined in another source file and linked with main.cpp later.
// For ease of doing exercise, definition is coded here as well.
std::istream &read(std::istream &is, Person &person)
{
	is >> person.name >> person.address;
	return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
	os << person.name << " " << person.address;
	return os;
}


#endif
