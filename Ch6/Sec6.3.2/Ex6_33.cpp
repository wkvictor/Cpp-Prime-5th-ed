#include <iostream>
#include <vector>

using namespace std;
// using Iter = vector<int>::iterator;
typedef vector<int>::iterator Iter;

void print(Iter beg, Iter end)
{
	if (beg != end)
	{
		cout << *beg << " ";
		print(next(beg),end);  // next!
	} else
	    cout << endl;

}

int main()
{
	vector<int> ivec = {0,1,2,3,4,5,6,7,8,9};
	print(ivec.begin(), ivec.end());

	return 0;
}