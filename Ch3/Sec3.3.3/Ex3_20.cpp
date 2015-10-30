#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// part 1: add adjacent elements
	vector<int> ivec(9,3);
	
	if ( ivec.size()%2 )  // if ivec is of odd length
		ivec.push_back(0);
	
	vector<int>::size_type i=0;
	cout << "The sum of adjacent elements: ";
	for ( i=0; i<ivec.size(); i+=2 )
		cout << ivec[i] + ivec[i+1] << " ";
	cout << endl;
	
	
	// part 2: add up from two ends
	vector<int> jvec(5,2);
	
	vector<int>::size_type j=0;
	
	cout << "The sum of two ends elements: ";
	for (j=0; j<jvec.size()/2; ++j)
		cout << jvec[j] + jvec[jvec.size()-j-1] << " ";
	
	if (jvec.size()%2)
		cout << jvec[jvec.size()/2];
		
	cout << endl;
	
	return 0;
}
