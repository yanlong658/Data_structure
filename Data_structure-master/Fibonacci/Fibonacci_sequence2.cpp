#include <iostream>

using namespace std;

int fib(int n)
{
	int x, y;

	if (n <= 1)
		return(n);
	else
	{
		return(fib(n - 1) + fib(n - 2));
	}
}

int main(int argc, char **argv)
{
	cout << fib(10) << endl;
	system("Pause");
	return 0;
}
