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

void sortPrint(vector<string> words) {
	elimDups(words);
	stable_sort(words.begin(), words.end(), isShorter);
	for(auto &s: words)
		cout << s << " ";
	cout << endl;
}

string make_plural(size_t ctr, const string &word, const string &ending) {
	return (ctr > 1) ? word+ending : word;
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
	// put words in alphabetical order and remove duplicates
	elimDups(words);  
	// sort words by size, but maintain alpha order for words of the same size
	stable_sort(words.begin(), words.end(), 
		        [](const string &a, const string &b)
		        { return a.size() < b.size(); });
	// get an iterator to the first element whose size() is >= sz
	auto wc = find_if(words.begin(), words.end(),
	               [sz](const string &a) {return a.size() >= sz;});
	// compute the number of elements with size >= sz
	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s")
	     << " of length " << sz << " or longer" << endl;
	// print words
	for_each(wc, words.end(),
		     [](const string &s) {cout << s << " ";});
	cout << endl;
}

int main(int argc, char const *argv[])
{
	vector<string> wordBag = {"the", "quick", "red", "fox", "jumps", 
	                         "over", "the", "slow", "red", "turtle"};
	biggies(wordBag, 5);

	return 0;
}