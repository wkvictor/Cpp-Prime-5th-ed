/* Ex 7.42 */

#ifndef _VEHICLE_
#define _VEHICLE_

#include <string>

using namespace std;

class Vehicle{

public:
	
	// non-delegating constructor
	Vehicle(string VIN, string make, string model, string color, unsigned year):
		VIN_(VIN), make_(make), model_(model), color_(color), year_(year) { }

	// delegating construtors:
	Vehicle(): Vehicle(" ", " ", " ", " ", 1990) {}
	Vehicle(istream& is): Vehicle() { is >> VIN_ >> make_ >> model_ >> color_ >> year_; }


private:
	string VIN_;
	string make_;
	string model_;
	string color_;
	unsigned year_;

};


#endif