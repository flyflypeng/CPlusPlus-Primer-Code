#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string input;

	cout << "Please input a string: " << endl;
	cin >> input;

	/*
	for (auto &c : input)
	{
		c = 'X';
	}
	*/

	// exercise 3.7: just for test
	/*
	for (char c : input)
	{
		c = 'X';
	}
	*/

	// exercise 3.8: just for test
	for (unsigned i; i < input.size(); i++)
	{
		input[i] = 'X';
	}

	cout << "The input string after processed: " << input << endl;

	return 0;
}