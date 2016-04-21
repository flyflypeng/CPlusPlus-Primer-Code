#include <iostream>

using namespace std;


/**
 * 计算可变参数列表 input 中所有数据的和
 * @param  input [description]
 * @return       [description]
 */
int func(initializer_list<int> input)
{
	int sum = 0;
	for (const int &item : input)
		sum += item;

	return sum;
}

int main(int argc, char const *argv[])
{

	cout << "invoke func(1,2,3,4,5,6,7,8,9,0)" << endl;

	int result = func({1, 2, 3, 4, 5, 6, 7, 8, 9, 0});

	cout << "The sum of {1, 2, 3, 4, 5, 6, 7, 8, 9, 0} = " << result << endl;

	return 0;
}