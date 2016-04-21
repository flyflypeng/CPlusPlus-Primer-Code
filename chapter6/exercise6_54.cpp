#include <iostream>
#include <vector>

using namespace std;

int func(int a, int b);

int func_add(int a, int b)
{
	return a + b;
}

int func_sub(int a, int b)
{
	return a - b;
}

int func_multi(int a, int b)
{
	return a * b;
}

int func_divi(int a, int b)
{
	return a / b;
}

int main(int argc, char const *argv[])
{

	typedef decltype(func) *funcP;
	vector<funcP> v;

	v.push_back(func_add);
	v.push_back(func_sub);
	v.push_back(func_multi);
	v.push_back(func_divi);

	int a = 8, b = 2;

	int result;

	for (auto p : v)
	{
		result = p(8, 2);
		cout << "The result =  " << result << endl;
	}


	return 0;
}