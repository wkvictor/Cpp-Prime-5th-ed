#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string word;

	cout << "The following is to test cin>>." << endl;
	
	while (cin>>word)
	{
		cout << word << endl;
	}

	return 0;
}