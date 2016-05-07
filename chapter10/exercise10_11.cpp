#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_vector(vector<string>& v)
{
	for (auto &it : v)
		cout << it << " ";

	cout << endl;
}

bool isShorter(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}

void eliDups(vector<string>& words)
{
	sort(words.begin(), words.end());

	// use unique() to eliminate duplicated words
	auto end_unique = unique(words.begin(), words.end());

	// erase duplication words in the vector
	words.erase(end_unique, words.end());
}


int main(int argc, char const *argv[])
{
	vector<string> words{"hello", "Nice", "to", "meet", "you", "and", "you", "hello"};

	cout << "Before call eliDups() " << endl;
	print_vector(words);

	eliDups(words);

	cout << "After call eliDups() " << endl;
	print_vector(words);

	// now we add self definited prediacate to stable_sort()
	stable_sort(words.begin(), words.end(), isShorter);

	cout << "After call stable_sort with isShorter" << endl;
	print_vector(words);

	return 0;
}