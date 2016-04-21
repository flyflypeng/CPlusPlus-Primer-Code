#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
	int int_array[5] = {1, 2, 3, 4, 5};

	vector<int> int_vec(begin(int_array), end(int_array));

	cout << "Output int value in int_vec" << endl;

	for (auto value : int_vec)
	{
		cout << value << " ";
	}

	cout << endl;

	return 0;
}