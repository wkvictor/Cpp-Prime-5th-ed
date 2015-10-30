#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;
using std::begin;
using std::end;
using std::endl;

int main()
{
	int c_arr[] = {0,1,2,3,4,5,6,7};
	vector<int> vec(begin(c_arr), end(c_arr));  // initialize a vector from an array
	
	for (auto num: vec)
		cout << num << endl;
	
	return 0;
}
