#ifndef _EXERCISE_7_23_H_
#define _EXERCISE_7_23_H_

#include <string>
#include <iostream>
#include <vector>

class Screen;

class Window_mgr {

public:
	// 窗口中每个每个屏幕的编号
	using ScreenIndex = std::vector<Screen>::size_type;

	Screen& getScreen(ScreenIndex i) {
		return screens[i];
	}

	void clear(ScreenIndex i);

	void addScreen(Screen s);

private:
	std::vector<Screen> screens;

};

class Screen {

public:
	friend void Window_mgr::clear(ScreenIndex i);

	typedef std::string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') {}
	Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) {}

	char get() const {
		return contents[cursor];
	}

	inline char get(pos ht, pos wd) const;

	Screen& set(char c);
	Screen& set(pos r, pos c, char ch);

	Screen& move(pos r, pos c);

	// 根据对象是否是 const 重载了 display 函数
	Screen& display(std::ostream &os)
	{
		os << "display() called!" << std::endl;
		do_display(os);
		return *this;
	}

	const Screen& display(std::ostream &os) const
	{
		os << "display() const called!" << std::endl;
		do_display(os);
		return *this;
	}

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;

	void do_display(std::ostream &os) const {
		os << contents;
	}
};

char Screen::get(pos w, pos r) const
{
	pos row = r * width;
	return contents[row + r];
}

Screen& Screen::set(char ch)
{
	contents[cursor] = ch;
	return *this;
}

Screen& Screen::set(pos r, pos c, char ch)
{
	pos now_pos = r * width + c;
	contents[now_pos] = ch;
	return *this;
}

inline Screen& Screen::move(pos r, pos c)
{
	cursor = r * width + c;
	return *this;
}

void Window_mgr::addScreen(Screen s)
{
	screens.push_back(s);
}

void Window_mgr::clear(ScreenIndex i)
{
	Screen& s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}

#endif