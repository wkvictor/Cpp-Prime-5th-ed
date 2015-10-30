#include <iostream>

using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;

	while (cin >> ch)
	{
		if (ch == 'a')
			++aCnt;
		else if (ch == 'e')
			++eCnt;
		else if (ch == 'i')
			++iCnt;
		else if (ch == 'o')
			++oCnt;
		else if (ch == 'u')
			++uCnt;
	}

	cout << "Num of a: \t" << aCnt << "\n"
		 << "Num of e: \t" << eCnt << "\n"
		 << "Num of i: \t" << iCnt << "\n"
		 << "Num of o: \t" << oCnt << "\n"
		 << "Num of u: \t" << uCnt << "\n" << endl;


	return 0;
}
