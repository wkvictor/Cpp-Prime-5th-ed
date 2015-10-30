#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> str;
	string word;
	
	while (cin >> word)
	{
		str.push_back(word);
	}

	// output the vector
	cout << "The vector is ";
	for(auto n: str)
	{
		cout << n << " ";
	}
	cout << endl;
	
	return 0;
}

