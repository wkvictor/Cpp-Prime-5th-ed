/* Ex 7.43 */

#include <iostream>
#include <vector>

using namespace std;

class NoDefault { 
public:
	NoDefault(const int i) { }

};


class C {
public:
	// default initializer:
	C(): no_default(0) { cout << "C default initialization." << endl; }
	// value initializer:
	C(const int i): no_default(i) { cout << "C initialized to " << i << endl; }

private:
	NoDefault no_default;
};


int main() {

	C c1;   // how to see what is inside? --> print out in the initializer
	C c2(8);

	std::vector<C> v1(10);
	std::vector<C> v2(10, 6);

}