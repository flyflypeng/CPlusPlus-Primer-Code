#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int ia[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	// version 1：使用范围 for 语句管理迭代过程
	cout << "version 1" << endl;
	for (const int(&row)[4] : ia)
	{
		for (int col : row)
		{
			cout << col << " ";
		}
		cout << endl;
	}

	// version 2：使用下标运算符遍历数组
	cout << "version 2" << endl;
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout << ia[i][j] << " ";
		}
		cout << endl;
	}

	// version 3：使用指针遍历数组
	cout << "version 3" << endl;
	int (*p)[4], *q;
	for (p = ia; p < ia + 3; p++)
	{
		for (q = *p; q < (*p + 4); q++)
		{
			cout << *q << " ";
		}
		cout << endl;
	}

	// version 4:使用 auto 来改造 version 1
	cout << "version 4" << endl;
	for (auto &row : ia)
	{
		for (auto col : row)
		{
			cout << col << " ";
		}
		cout << endl;
	}

	// version 5：使用 auto 来改造 version 2
	cout << "version 5" << endl;

	for (auto ii = 0; ii < 3; ii++)
	{
		for (auto jj = 0; jj < 4; jj++)
		{
			cout << ia[ii][jj] << " ";
		}
		cout << endl;
	}

	// version 6：使用 auto 来改造 version 3
	cout << "version 6" << endl;
	for (auto p = ia; p < ia + 3; p++)
	{
		for (auto q = *p; q < (*p + 4); q++)
		{
			cout << *q << " ";
		}
		cout << endl;
	}



	return 0;
}