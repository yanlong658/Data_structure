#include <iostream> 
#include "Rectangle.h"

using namespace std;

int main()
{
	Rectangle r(1, 3, 6, 6), t(1, 3, 6, 6); // call constructor
	if (r == t) cout << 1 << endl; // overloaded "=="
	cout << r; // overloaded "<<¡§
	system("PAUSE");
	return 0;
}
