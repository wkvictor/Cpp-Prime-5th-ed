#include <iostream>
#include <initializer_list>

using namespace std;

int summation(initializer_list<int> val)
{
	int ret = 0;
	for (auto beg = val.begin(); beg != val.end(); ++beg)
	{
		ret += *beg;
	}
	return ret;
} 


int main()
{
	cout << "The sum is " << summation({1,2,3,4,5}) << endl;

	return 0;
}