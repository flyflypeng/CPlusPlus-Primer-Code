#include <iostream>

int main()
{
	// 打印 2M，并换行
	std::cout << '\x32' << '\115' << '\n';

	// 先输出 2，再输出制表符，然后输出M，最后换行
	std::cout << '\x32' << '\t' << '\115' << '\n';

	return 0;
}