#include <iostream>
#include <vector>
using namespace std;

int func(int, int);   // declaration
using PF = int(*) (int, int);   // alias
vector<PF> vec;  // declare a vector of func pointer type

int add(int a, int b)
{
	return a + b;
} 

int subtract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return (b!=0 ? a/b : 0);
}


int main()
{
	vec = {add, subtract, multiply, divide};

	for (auto f: vec)
		cout << f(10,5) << endl;

	return 0;
}



