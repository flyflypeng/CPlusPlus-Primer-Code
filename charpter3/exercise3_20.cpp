#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{

	vector<int> int_vec;
	int input_value;

	cout << "Please input a series of int value: " << endl;

	while (cin >> input_value)
	{
		int_vec.push_back(input_value);
	}

	// 输出相邻整数的和
	/*
	unsigned current = 0, next = 1;

	if (int_vec.size() < 2)
	{
		cout << "The size of int_vec must bigger than 2" << endl;
		return -1;
	}


	while (next != int_vec.size())
	{

		cout << int_vec[current] + int_vec[next] << endl;

		current = next;
		next++;
	}
	*/

	unsigned first, last;

	first  = 0;
	last = int_vec.size() - 1;

	if (last < 0)
	{
		return -1;
	}

	// 此时 int_vec 中至少存在一个元素

	while (first <= last)
	{
		cout << int_vec[first] + int_vec[last] << endl;
		first++;
		last--;
	}

	return 0;
}