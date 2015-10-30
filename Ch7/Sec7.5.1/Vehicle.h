/* Ex 7.40 */

#ifndef _VEHICLE_
#define _VEHICLE_

#include <string>

using namespace std;

class Vehicle{

public:
	Vehicle() = default;
	Vehicle(string VIN, string make, string model, string color, unsigned year):
		VIN_(VIN), make_(make), model_(model), color_(color), year_(year) { }
	Vehicle(istream& is) { is >> VIN_ >> make_ >> model_ >> color_ >> year_; }


private:
	string VIN_;
	string make_;
	string model_;
	string color_;
	unsigned year_;

};


#endif