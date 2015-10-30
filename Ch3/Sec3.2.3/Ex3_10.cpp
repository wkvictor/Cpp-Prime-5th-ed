#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	cout << "Please input a sentence with punctuations: " << endl;

	string sentence;
	getline(cin,sentence);

	string new_stc;  
	for (auto &c: sentence)
	{
		if (!ispunct(c))
		{
			new_stc += c;
		}
	}

	cout << "New sentence without punctuations is:\n" << new_stc << endl;


	return 0;
}