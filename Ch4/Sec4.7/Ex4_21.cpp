#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> ivec{0,1,2,3,4,5,6,7,8,9};
	
	for (auto p = ivec.begin(); p != ivec.end(); ++p)
		(*p) = (*p)%2 ? (*p)*2 : (*p);
	
	for (int& i: ivec)
		cout << i << " ";
	cout << endl;
		
	
	return 0;
}
