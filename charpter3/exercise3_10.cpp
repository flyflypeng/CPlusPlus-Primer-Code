#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
	string input;

	cout << "Please input a string which includes punctuations: " << endl;
	cin >> input;

	string result;

	for (auto c : input)
	{
		if (!ispunct(c))
		{
			result += c;
		}
	}

	cout << "The input string after processed: " << result << endl;

	return 0;
}