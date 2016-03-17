#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string input, result;

	// concatenate input string
	/*
	while (cin >> input)
	{
		result  += input;
	}

	cout << "The result of all input string combined: " << result << endl;
	*/

	// concatenate all input string and using space character to split strings

	// 第一个输入字符单独处理
	cin >> result;

	while (cin >> input)
	{
		result  += " ";
		result += input;
	}

	cout << "The result of all input string combined: " << result << endl;

	return 0;
}