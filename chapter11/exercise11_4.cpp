#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <map>
#include <vector>

using namespace std;

void ignore_punctuation_upper(string& word);

void count_words_ign(istream &input)
{
	map<string, size_t> word_count;

	string word;
	string word_ign;

	while (input >> word)
	{
		ignore_punctuation_upper(word);
		++word_count[word];
	}

	for (const auto &w : word_count)
	{
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
	}
}


void ignore_punctuation_upper(string& word)
{

	// get the size of string word
	int size = word.size();

	char *temp = (char*)malloc(size + 1);
	char *p = temp;

	// firstly, process upper letter
	for (const auto c : word)
	{
		if (isupper(c))
		{
			*p = tolower(c);
			p++;
		}
		else if (!ispunct(c))
		{
			*p = c;
			p++;
		}
	}

	*p = '\0';

	word = temp;

	free((void*)temp);
}

int main(int argc, char const *argv[])
{
	count_words_ign(cin);
	return 0;
}