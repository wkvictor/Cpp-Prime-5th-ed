#include <iostream>

using namespace std;

void swap(int& i1, int& i2)
{
	auto tmp = i1;
	i1 = i2;
	i2 = tmp;
}

int main()
{
	int i1 = 9, i2 = 16;

	cout << "Before swap:\t i1=" << i1 << ", i2=" << i2 << endl;
	swap(i1, i2);
	cout << "After swap:\t i1=" << i1 << ", i2=" << i2 << endl;

	return 0;
}