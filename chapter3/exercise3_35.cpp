#include <iostream>
#include <iterator>

using namespace std;

int main()
{
	int int_array[5] = {0};

	// 首先输出数组中的初始值
	int *p_begin = begin(int_array);
	int *p_end = end(int_array);

	cout << "The initial value in int_array:" << endl;

	int *p;
	for (p = p_begin; p != p_end; p++)
	{
		cout << *p << " ";
	}

	cout << endl;

	cout << "The value in int_array after assigned: " << endl;

	// 将数组中的值全部置为 1
	for (p = p_begin; p != p_end; p++)
	{
		*p = 1;
		cout << *p << " ";
	}

	cout << endl;

	return 0;
}