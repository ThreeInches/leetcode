#include <iostream>
using namespace std;

int main3()
{
	int i = 0, a = 0;
	while (i < 20)
	{
		for (;;)
		{
			if ((i % 10) == 0)
			{
				break;
			}
			else
			{
				i--;
			}
		}
		i += 11;
		a += i;
	}
	printf("%d\n", a);
	system("pause");
	return 0;
}
