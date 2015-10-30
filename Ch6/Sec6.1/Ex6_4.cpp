#include <iostream>

using namespace std;

long long fact(long long val)
{
	if (val == 0 || val == 1)
		return 1LL;
	else 
		return val * fact(val-1);

}


int main()
{
	long long i;

	cout << "Please input an integer for factorial computation: " << endl;
	cin >> i;
	cout << "The factorial " << i << "! = " << fact(i) << endl;


	return 0;
}