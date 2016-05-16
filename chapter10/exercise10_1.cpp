#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{

	int input_data, value;
	vector<int> vec_int;
	cout << "Please input some int numbers: " << endl;


	while (cin >> input_data)
	{
		vec_int.push_back(input_data);
	}

	// 一定要加上这一句用来清空输入缓冲区，否则会出现后面的 cin 直接从输入缓存区中读取到未定义的值
	cin.clear();

	cout << endl << "Please input value that you want to find: " << endl;

	cin >> value;

//	cout << value << " get!" << endl;

	int result = count(vec_int.begin(), vec_int.end(), value);

	cout << "The value " << value << " repeates " << result << " times!" << endl;

	// test EOF's Value
	//unsigned int eof_val = -1;
	//cout << "eof_val = " << eof_val << endl;

	return 0;
}