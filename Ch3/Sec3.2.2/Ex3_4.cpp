#include <iostream>
#include <string>

using namespace std;

int main()
{	
	string s1, s2;
	cout << "Please input two strings seperated by spaces: " << endl;
	cin >> s1 >> s2;

    // test if s1 is equal to s2
	if (s1==s2)
	{
		cout << "The two strings are equal.\n" << endl;
	} else if (s1>s2)
	{
		cout << "s1 is larger.\n" << endl;
	} else 
	{
		cout << "s2 is larger.\n" << endl;
	}


	// test the lengths of s1 and s2
	if (s1.size() == s2.size())
	{
		cout << "Two strings are of equal length.\n" << endl;
	} else if (s1.size() > s2.size())
	{
		cout << "s1 is longer.\n" << endl;
	} else 
	{
		cout << "s2 is longer.\n" << endl;
	}


	return 0;
}