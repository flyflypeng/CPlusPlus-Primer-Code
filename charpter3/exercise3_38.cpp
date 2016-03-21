#include <iostream>
#include <cstring>

using namespace std;

int main()
{

	char str1[] = "hello";
	char str2[] = " world!";

	char str3[20];

	strcpy(str3, str1);
	strcat(str3, str2);

	cout << "The result of str1 + str2 = " << str3 << endl;

	return 0;
}