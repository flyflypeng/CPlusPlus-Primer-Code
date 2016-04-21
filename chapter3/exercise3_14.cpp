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


	// output value in int_vec
	for (const auto v : int_vec)
	{
		cout << v << " ";
	}

	cout << endl;


	return 0;
}