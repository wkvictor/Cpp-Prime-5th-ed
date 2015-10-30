// Sec 7.1.4 Ex 7.15

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

struct Person;  // declaration for the following declaration
std::istream &read(std::istream &, Person &);  // declaration for the 3rd constructor

struct Person {
	// constructors
	Person() = default;
	Person(const std::string &s1, const std::string &s2):
		name(s1), address(s2) {	}
	Person(std::istream &is) { read(is, *this); }   // definition
	
	// data members
	std::string name;
	std::string address;
	
	// member functions
	std::string get_name() const {return name;}
	std::string get_address() const {return address;}
};

// NOTICE: nonmember functions should be declared here, but not defined.
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
