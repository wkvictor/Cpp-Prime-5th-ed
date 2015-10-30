#include <iostream>
#include "Chapter6.h"

using namespace std;

int main()
{
	long long i;

	cout << "Please input an integer (below 20) for factorial computation: " << endl;
	cin >> i;
	cout << "The factorial " << i << "! = " << fact(i) << endl;


	return 0;
}