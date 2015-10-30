#include <iostream>

using namespace std;

int main()
{
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;

	r2 = 3.14159;
	cout << "r2=" << r2 << " d=" << d << endl;

	r2 = r1;
	cout << "r2=" << r2 << " d=" << d << endl;

	i = r2;
    cout << i << endl;

	r1 = d;
	cout << r1 << endl;

	double dval = 3.14;
	const int &ri = dval;   // const int: can truncate
	cout << ri << endl;

	// double num = 8.12;
	// int &rn = num;       // non-const int: error
	// cout << rn << endl;

	// rn = 7;
	// cout << rn << num << endl;

	return 0;
}