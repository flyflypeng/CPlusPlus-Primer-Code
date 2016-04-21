#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{

	vector<string> str_vec;
	string input_str;

	cout << "Please input a series of word: " << endl;

	while (cin >> input_str)
	{
		str_vec.push_back(input_str);
	}

	// set every word in str_ver to upper word
	for (auto &value : str_vec)
	{
		for (auto &c : value)
		{
			if (!isupper(c))
			{
				c = toupper(c);
			}
		}
	}

	// output content in str_vec
	for (const auto value : str_vec)
	{
		cout << value << endl;
	}

	return 0;
}