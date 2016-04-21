#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
	string str1, str2;

	// input hint
	cout << "Please input two string: " << endl;

	// get input string from standard input
	cin >> str1 >> str2;

	// test str1 == str2 or not

	if (str1 == str2)
	{
		cout << "str1 == str2: " << str1 << endl;
	}
	if (str1 > str2)
	{
		cout << "str1 > str2! str1 == " << str1 << endl;
	}
	if (str1 < str2)
	{
		cout << "str1 < str2! str2 = " << str2 << endl;
	}

	// test len(str1) == len(str2) or not
	auto str1_size = str1.size();
	auto str2_size = str2.size();

	if (str1_size == str2_size)
	{
		cout << "The length of str1 == str2 " << endl;
	}

	if (str1_size > str2_size)
	{
		cout << "str1.size() > str2.size() " << str1 << endl;
	}

	if (str1_size < str2_size)
	{
		cout << "str1.size() < str2.size() " << str2 << endl;
	}
	return 0;
}