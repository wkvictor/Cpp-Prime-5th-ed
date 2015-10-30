#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1 = {0,1,1,2};
	vector<int> v2 = {0,1,1,2,3,5,8};

	vector<int> v_short, v_long;
	if (v1.size() < v2.size())
	{
		v_short = v1; v_long = v2;
	} else
	{
		v_short = v2; v_long = v1;
	}

	bool flag = true;
	for (decltype(v_short.size()) idx = 0; idx < v_short.size(); ++idx)
	{
		if (v_short[idx] != v_long[idx])
		{
			flag = false;
			break;
		}

	}

	if (flag)
	{
		cout << "v1 is prefix of v2 \n" << endl;
	} else
	{
		cout << "v1 is not prefix of v2 \n" << endl;
	}

	return 0;
}