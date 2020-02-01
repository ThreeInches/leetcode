#include <iostream>
using namespace std;

int func(int a)
{
	int b;
	switch (a)
	{
	case 1:
		b = 30;
	case 2:
		b = 20;
	case 3:
		b = 16;
	default:
		b = 0;
	}
	return b;
}

int main2()
{
	cout << func(1) << endl;
	system("pause");
	return 0;
}
