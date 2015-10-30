#include <iostream>
#include <string>

using namespace std;

int main()
{
	string previous, current, record;
	int cnt = 1, maxcnt = 1;

	cin >> previous;
	while (cin >> current)
	{
		if (current == previous)
			++cnt;
		else
			cnt = 1;

		if (cnt > maxcnt) {
			maxcnt = cnt;
			record = current;
		}

		previous = current;

	}

	cout << "Maximum Occurence: The word " << record << " occured " << maxcnt << " times." << endl;

	return 0;
}