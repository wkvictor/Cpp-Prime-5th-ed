#include <iostream>

int main()
{
	int a = 0, b = 0xA;

	auto c = a+b;  // C++ 11 feature: auto type identifier
	std::cout << "auto c = " << c << std::endl;

	return 0;
}