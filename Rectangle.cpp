#include "Rectangle.h"
#include <iostream> 

Rectangle::Rectangle(int x, int y, int h, int w)
{
	xLow = x;   yLow = y;
	height = h;   width = w;
}


int Rectangle::operator==(const Rectangle& s)
// overload "=="
{
	if (this == &s) return 1;
	else if ((xLow == s.xLow) && (yLow == s.yLow) &&
		(height == s.height) && (width == s.width))
		return 1;
	return 0;
}

std::ostream& operator<<(std::ostream& os, Rectangle& r)  // overload ¡§<<"
{
	os << "Position is: " << r.xLow << " ";
	os << r.yLow << std::endl;
	os << "Height is: " << r.height << std::endl;
	os << "Width is: " << r.width << std::endl;
	return os;
}

int Rectangle::GetHeight() { return height; }
int Rectangle::GetWidth() { return width; }

