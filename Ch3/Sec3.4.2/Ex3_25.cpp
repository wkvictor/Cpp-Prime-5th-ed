#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<unsigned> scores(11,0);
	unsigned grade;
	
	while (cin >> grade){
		if (grade <= 100)
			++(*(scores.begin()+grade/10));  // use .begin() to get beginning iterator; shift by grade/10; deference; then ++
	}
	
	for (auto num: scores)
		cout << num << " ";
	cout << endl;
	
	return 0;
}
