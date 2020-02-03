#include <iostream>
using namespace std;

float func(float a, int b)
{
	float m = 1, n = 1;
	int i;
	for (i = 1; i < b; i++)
	{
		m *= a / i;
		n += m;
	}
	return n;
}

int main3()
{
	cout << func(1.5, 2) << endl;
	system("pause");
	return 0;
}
