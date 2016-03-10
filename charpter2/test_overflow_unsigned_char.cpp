#include <iostream>

int main()
{
	// 测试一下如果给有符号数赋值超过其最大值会发生什么情况
	// 以下给一个 signed char 类型的数据赋值 256，看看会有什么样的结果

	signed char a;

	std::cout << "The input value of a: " << 129 << std::endl;

	a = 129;

	std::cout << "After a is assigned 129, the value of a is " << (int)a << std::endl;

	return 0;
}