#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};

	int sum = 0;

	sum = accumulate(v.cbegin(), v.cend(), 0);

	cout << "The Sum of elements in vector v = " << sum << endl;

	return 0;
}
