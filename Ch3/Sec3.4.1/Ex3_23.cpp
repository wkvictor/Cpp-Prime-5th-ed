#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v{1,3,5,7,8,0,2,6,9,4};
	
	for (auto it = v.begin(); it!=v.end(); ++it )
	{
		*it *= 2;
		cout << *it << " ";
	}
	cout << endl;
	
	return 0;
}
