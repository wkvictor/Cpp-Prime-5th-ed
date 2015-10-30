#include <iostream>

using namespace std;

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;

	while (cin >> ch)
	{
		switch (ch) 
		{
			case 'A': case 'a':
				++aCnt; break;
			case 'E': case 'e':
				++eCnt; break;
			case 'I': case 'i':
				++iCnt; break;
			case 'O': case 'o':
				++oCnt; break;
			case 'U': case 'u':
				++uCnt; break;

		}
	}

	cout << "Num of a: \t" << aCnt << "\n"
		 << "Num of e: \t" << eCnt << "\n"
		 << "Num of i: \t" << iCnt << "\n"
		 << "Num of o: \t" << oCnt << "\n"
		 << "Num of u: \t" << uCnt << "\n" << endl;


	return 0;
}
