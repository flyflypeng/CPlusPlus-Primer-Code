#include <iostream>

int main()
{
	int month = 9, day = 7;
	// 这里提示错误信息为：9是非法的八进制数字
	// 因为以0开头的整数都被解释为八进制数字
	int month1 = 09, day1 = 07;

	return 0;
}