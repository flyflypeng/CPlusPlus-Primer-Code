#include "exercise_7_23.h"

int main(int argc, char const *argv[])
{

	Window_mgr mgr;

	mgr.addScreen(Screen(10, 10, '*'));

	Screen& s = mgr.getScreen(0);

	s.display(std::cout);
	std::cout << std::endl;

	mgr.clear(0);

	s.display(std::cout);
	std::cout << std::endl;

	return 0;
}