#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void elimDups(vector<string>& words) {
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2) {
	return s1.size() < s2.size();
}

int main(int argc, char const *argv[])
{
	vector<string> wordBag = {"the", "quick", "red", "fox", "jumps", 
	                         "over", "the", "slow", "red", "turtle"};
	elimDups(wordBag);
	stable_sort(wordBag.begin(), wordBag.end(), isShorter);

	for(auto &s: wordBag)
		cout << s << " ";
	cout << endl;

	return 0;
}