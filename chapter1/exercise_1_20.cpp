#include <iostream>
#include "Sales_item.h"

int main()
{
	/* exercise 20
	Sales_item item1;
	std::cin >> item1;
	std::cout << item1 << std::endl;
	*/

	// exercise 22
	Sales_item item1, item2, item3;

	std::cin >> item1 >> item2 >> item3;

	std::cout << item1 + item2 + item3 << std::endl;

	return 0;
}