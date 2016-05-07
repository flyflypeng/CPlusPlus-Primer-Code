#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void print_vector(vector<int>& v)
{
	for (auto &it : v)
		cout << it << " ";

	cout << endl;
}

int main(int argc, char const *argv[])
{
	vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

	cout << "Before call fill_n()" << endl;

	print_vector(v);

	fill_n(v.begin(), v.size(), 0);

	cout << "After call fill_n()" << endl;

	print_vector(v);

	return 0;
}