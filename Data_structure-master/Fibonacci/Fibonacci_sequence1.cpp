#include <iostream>

using namespace std;

int fib(int n)
{
	int i, x, logib, hiflib;

	if (n <= 1)
		return (n);
	logib = 0;
	hiflib = 1;

	for (i = 2; i <= n; i++)
	{
		x = logib;
		logib = hiflib;
		hiflib = x + logib;
	}

	return(hiflib);
}

int main(int argc, char **argv)
{
	cout << fib(3) << endl;
	system("Pause");
	return 0;
}
