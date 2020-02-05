#include <iostream>
using namespace std;

int fun(int x, int y)
{
	if (x == y)
	{
		return (x);
	}
	else
	{
		return ((x + y) / 2);
	}
}

int main2()
{
	int a = 4, b = 5, c = 6;
	printf("%d\n", fun(2 * a, fun(b, c)));
	system("pause");
	return 0;
}
