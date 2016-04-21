#include <iostream>
#include <vector>

using namespace std;

bool find_data(vector<int>::iterator begin, vector<int>::iterator end, int value)
{
	while (begin != end)
	{
		if (*begin == value)
			return true;

		begin++;
	}
	return false;
}

vector<int>::iterator find_data_and_return_ite(vector<int>::iterator begin, vector<int>::iterator end, int value)
{
	while (begin != end)
	{
		if (*begin == value)
			return begin;

		begin++;
	}
	return end;
}


int main(int argc, char const *argv[])
{

	std::vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	cout << "call find_data(3)......" << endl;

	vector<int>::iterator result = find_data_and_return_ite(v.begin(), v.end(), 3);

	if (result != v.end())
	{
		cout << "Success!" << endl;
	} else {
		cout << "Failed!" << endl;
	}

	cout << "call find_data(100)......" << endl;

	vector<int>::iterator result_2 = find_data_and_return_ite(v.begin(), v.end(), 100);

	if (result_2 != v.end())
	{
		cout << "Success!" << endl;
	} else {
		cout << "Failed!" << endl;
	}


	return 0;
}