#include <iostream>
#include <stdexcept>

using namespace std;


int main()
{
	int a, b;
	cout << "Please input two integer number: " << endl;

	cin >> a >> b;

	int result;

	try {
		if (b == 0)
			throw runtime_error("Divisor is 0");
		result = a / b;
		cout << "The result of a/b = " << result << endl;
	} catch (runtime_error err)
	{
		cout << "Error Info provided by Programmer! " << err.what() << endl;
		return -1;
	}

	return 0;
}