#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
	vector<string> text{"This is the first paragraph.", "", "Here is another paragraph."};
	
	cout << "Before capitalizing the first paragraph: " << endl;
	for (auto it = text.cbegin(); it != text.end(); ++it)  // print
		cout << *it << endl;
		
		
	for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)  // "it" is an iterator
		for (auto &c: *it)  // range-for; *it is dereference
			c = toupper(c);
			
	cout << "\nAfter capitalizing the first paragraph: " << endl;
	for (auto it = text.cbegin(); it != text.end(); ++it)  // print
		cout << *it << endl;
	
	
	return 0;
}
