#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string line;

	cout << "The following is to test getline()." << endl;
	
	while (getline(cin,line))
	{
		cout << line << endl;
	}

	return 0;
}