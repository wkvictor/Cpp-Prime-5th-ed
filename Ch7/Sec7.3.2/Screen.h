#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <iostream>

class Screen {

public:
	// type member
	typedef std::string::size_type pos;

	// constructors
	Screen() = default;
	Screen(pos ht, pos wd): height(ht), width(wd), contents(ht*wd, ' ') {}
	Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht*wd, c) {}

    // member functions: implicitly inline
    char get() const {return contents[cursor];}   // definition: get char at cursor
    char get(pos r, pos c) const {return contents[r*width+c];}      // definition: get char at specified row and col

    Screen &set(char ch) { contents[cursor] = ch; return *this; }
    Screen &set(pos r, pos c, char ch) { contents[r*width+c] = ch; return *this; }

    Screen &move(pos r, pos c) {cursor = r*width+c; return *this;}     // definition: move cursor to specified row and col

    Screen &display(std::ostream &os) {do_display(os); return *this;}   // nonconst type
    const Screen &display(std::ostream &os) const {do_display(os); return *this;}   // const type

private:
	// data members
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;

	void do_display(std::ostream &os) const {os << contents;}
};


#endif