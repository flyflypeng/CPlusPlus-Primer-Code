#include <iostream>
#include <string>
#include <stack>
#include <fstream>

using namespace std;

// 这个函数有个 bug，就是它不能处理‘’或者 "" 中含有 {} 或者 () 的情况
bool Process_bracket_match(string filename)
{
	ifstream input(filename); // open file and create fstream

	stack<char> s; // create stack for saving character read from input stream

	char prev = 0;
	char c = prev;

	while (input >> c)
	{
		switch (c) {
		case '{':
		case '(':
			s.push(c);
			break;
		case '}':
			if (s.empty()) //处理 {}} 的特殊情况
				return false;
			if (s.top() == '{')
				s.pop();
			else
				return false;
			break;
		case ')':
			if (s.empty())
				return false;
			if (s.top() == '(')
				s.pop();
			else
				return false;
			break;
		default:
			break;
		}

		prev = c;
	}

	if (s.empty())
		return true;

	return false;
}

bool Process_bracket_match_2(string filename)
{
	ifstream input(filename); // open file and create fstream

	stack<char> s; // create stack for saving character read from input stream

	char prev = 0;
	char c = prev;

	int flag = 0;

	while (input >> c)
	{
		switch (c) {
		case '\'':
		case '\"':
			if (flag == 0) // 还要考虑转义字符的问题
			{
				flag = 1; // 等待 “ 或 ‘ 结束
			} else {
				flag = 0;
			}

			break;
		case '{':
		case '(':
			if (flag != 1)
				s.push(c);
			break;
		case '}':
			if (s.empty()) //处理 {}} 的特殊情况
				return false;
			if (s.top() == '{')
				s.pop();
			else
				return false;
			break;
		case ')':
			if (s.empty())
				return false;
			if (s.top() == '(')
				s.pop();
			else
				return false;
			break;
		default:
			break;
		}

		prev = c;
	}

	if (s.empty())
		return true;

	return false;
}

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		cout << "Please input a filename!" << endl;
		return 0;
	}

	bool result = Process_bracket_match(argv[1]);

	if (result)
	{
		cout << argv[1] << " is bracket matched!" << endl;
	} else {
		cout << argv[1] << " is not bracket matched!" << endl;
	}


	return 0;
}
