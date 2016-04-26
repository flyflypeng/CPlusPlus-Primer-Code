#include <iostream>
#include <forward_list>

using namespace std;

void find_and_delete_odd(forward_list<int>& l)
{
	forward_list<int>::iterator prev = l.before_begin();
	forward_list<int>::iterator curr = l.begin();

	while (curr != l.end())
	{
		if (*curr % 2)
			curr = l.erase_after(prev);
		else {
			prev = curr;
			curr++;
		}
	}
}

void print_forward_list(forward_list<int> &l)
{
	for (auto &elem : l)
		cout << elem << " ";
}

int main(int argc, char const *argv[])
{
	forward_list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9};

	cout << "Before call find_and_delete_odd()..." << endl;
	print_forward_list(l);
	cout << endl;

	cout << "After call find_and_delete_odd()..." << endl;
	find_and_delete_odd(l);
	print_forward_list(l);
	cout << endl;

	return 0;
}