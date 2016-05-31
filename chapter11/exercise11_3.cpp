#include <iostream>
#include <string>
#include <map>

using namespace std;

void count_words(istream &input)
{
	map<string, size_t> word_count;

	string word;

	while (input >> word)
		++word_count[word];

	for (const auto &w : word_count)
	{
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? "times" : " time") << endl;
	}
}

int main(int argc, char const *argv[])
{
	count_words(cin);
	return 0;
}