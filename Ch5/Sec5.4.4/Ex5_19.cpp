#include <iostream>
#include <string>

using namespace std;

int main()
{
	string rsp;
	do
	{
		string s1, s2;
		cout << "Please enter two strings: " << endl;
		cin >> s1 >> s2;
		cout << ( s1 < s2 ? s1: s2 ) << " is less than " 
			 << ( s1 > s2 ? s1: s2 ) << "\n"
			 << "More inputs? yes or no: " << endl;
	    cin >> rsp;

	} while (!rsp.empty() && rsp[0]=='y');

	return 0;
}