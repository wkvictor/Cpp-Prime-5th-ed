#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int num;
	while (cin >> num)
	{
		v.push_back(num);
	}

	// output the vector
	cout << "The vector is ";
	for(auto n: v)
	{
		cout << n << " ";
	}
	cout << endl;
	
	return 0;
}