#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{

	vector<int> int_vec(10);
	int input_value;

	cout << "Please input 10 input value : " << endl;

	// 初始化
	for (int i = 0; i < 10; i++)
	{
		cin >> input_value;
		int_vec[i] = input_value;
	}

	// 使用迭代器讲所有元素的值变成原来的两倍
	for (auto it = int_vec.begin(); it != int_vec.end(); ++it)
	{
		(*it) = (*it) * 2;
	}


	// 输出结果
	//
	for (auto data : int_vec)
	{
		cout << data << endl;
	}

	return 0;
}