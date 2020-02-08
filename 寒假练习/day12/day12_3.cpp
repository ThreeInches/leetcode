#include <stdlib.h>
#include <stdio.h>

int main3()
{
	int a = 1;
	int b = 2;
	for (; a < 8; a++)
	{
		b += a;
		a += 2;
	}
	printf("%d,%d", a, b);
	system("pause");
	return 0;
}
