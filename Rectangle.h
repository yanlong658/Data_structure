#include <iostream> 
// in the header file Rectangle.h
#ifndef RECTANGLE_H /* preprocessor
			 directive, ¡§if not defined¡¨ */
#define RECTANGLE_H
class Rectangle	 //  class name: Rectangle
{
public:
	// 4 member functions 
	int operator==(const Rectangle&);
	Rectangle(int x, int y, int h, int w);
	int GetHeight();
	int GetWidth();
	//因ostream會使用到rectangle的變數，因此要使用friend
	friend std::ostream& operator<< (std::ostream&, Rectangle&);

private:
	// 4 data members
	int xLow, yLow, height, width;
	// (xLow, yLow) is the bottom left corner
};

#endif
