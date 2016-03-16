#include <iostream>

int main()
{

	// 验证指向常量的常量指针是否可以赋值给相同数据类型的普通指针

	const int a = 0;
	//int *const ptr = &a;
	const int *const p3 = &a;

	return 0;
}