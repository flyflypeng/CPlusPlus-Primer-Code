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

bool isBiggerEqualThan5(const string& s)
{
	int size = s.size();

	return size >= 5 ? true : false;
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
	vector<string> words{"hello", "Nice", "to", "meet", "you", "and", "you", "hello", "good luck", "bye bye"};

	cout << "Before call eliDups() " << endl;
	print_vector(words);

	eliDups(words);

	cout << "After call eliDups() " << endl;
	print_vector(words);

	// now we add self definited prediacate to stable_sort()
	//stable_sort(words.begin(), words.end(), isShorter);

	//cout << "After call stable_sort with isShorter" << endl;
	//print_vector(words);

	// call partition algorithm to find words that constructed by more than 5 words
	auto it = partition(words.begin(), words.end(), isBiggerEqualThan5);

	cout << "After call partition() and find words more than 5 characters " << endl;

	for (auto i = words.begin(); i != it; i++)
		cout << *i << " ";

	cout << endl;


	return 0;
}