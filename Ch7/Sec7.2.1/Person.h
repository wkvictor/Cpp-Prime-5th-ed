#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person;  // declaration for the following declaration
std::istream &read(std::istream &, Person &);  // declaration for the 3rd constructor


class Person {

friend std::istream &read(std::istream &, Person &);
friend std::ostream &print(std::ostream &, const Person &);

public:
	// constructors
	Person() = default;
	Person(const std::string &s1, const std::string &s2): name(s1), address(s2) {}
	Person(std::istream &is) { read(is, *this); }   // definition

private:
	// data members
	std::string name;
	std::string address;
	
	
public:
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
