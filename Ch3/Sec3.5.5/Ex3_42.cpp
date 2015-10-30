#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec{0,1,2,3,4,5};
	const unsigned arr_size = vec.size();
	int c_arr[arr_size];
	
	for (unsigned t=0; t<arr_size; ++t)  // use subscript
	{
		c_arr[t] = vec[t];
	}
	
	for(int num: c_arr)
		cout << num << " ";
	cout << endl;
	
	return 0;
} 
