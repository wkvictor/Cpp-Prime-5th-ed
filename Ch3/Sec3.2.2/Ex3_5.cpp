#include <iostream>
#include <string>

using namespace std;

int main()
{
	string total, tmp;

	cout << "Please input strings separated by spaces: " << endl;

	while (cin >> tmp)
	{
		if (total.empty())
		{
			total += tmp;
		} else {
			total += " " + tmp;
		}

	}

	cout << "Concatenated string is " << total << endl;


	return 0;
}