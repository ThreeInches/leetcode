#include <iostream>
using namespace std;

int main3()
{
	int i, j;
	int a[2][3];
#if 0
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			a[i][j] = j * 3 + i + 1;
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << a[i][j] << ' ';
		}
	}
#elseif 0
	for (i = 0; i < 6; i++)
	{
		a[i / 3][i % 3] = i + 1;
	}
	for (i = 0; i < 6; i++)
	{
		cout << a[i / 3][i % 3] << ' ';
	}
#else
	for (i = 1; i <= 6; i++)
	{
		a[i][i] = i;
	}
	for (i = 1; i <= 6; i++)
	{
		cout << a[i][i] << ' ';
	}
#endif
	system("pause");
	return 0;
}
