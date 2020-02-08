#include <iostream>
using namespace std;

int func(int i, int j)
{
	if (i <= 0 || j <= 0)
	{
		return 1;
	}
	return 2 * func(i - 3, j / 2);
}

int main1()
{
	cout << func(15, 20) << endl;
	system("pause");
	return 0;
}
