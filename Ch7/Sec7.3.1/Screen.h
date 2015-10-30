#ifndef SCREEN_H
#define SCREEN_H

#include <string>

class Screen {

public:
	// type member
	typedef std::string::size_type pos;

	// constructors
	Screen() = default;
	Screen(pos ht, pos wd): height(ht), width(wd), contents(ht*wd, ' ') {}   // "contents" is actually a 1-d string
	Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht*wd, c) {}

    // member functions
    char get() const {return contents[cursor];}   // definition: get char at cursor
    char get(pos r, pos c) const {return contents[r*width+c];}      // definition: get char at specified row and col
    inline Screen &move(pos r, pos c) {cursor = r*width+c; return *this;}     // definition: move cursor to specified row and col

private:
	// data members
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;   // "contents" is actually a 1-d string
};


#endif