#include <iostream>

int main()
{
	double wage;
	// 如果下面这条语句中的变量 wage 在前面没有定义过，那么编译器就会报 wage 未定义的错误
	// 并且需要注意一点的是，赋值运算符 "=" 的结合顺序是从右向左
	double salary = wage = 9999.99;

	std::cout << salary << wage << std::endl;

	int i = {3.14};
	int ii{1.23};
	int iii(1.23);

	return 0;
}