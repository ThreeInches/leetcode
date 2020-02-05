#include <iostream>
using namespace std;

int fun(int n)
{
	if (n)
	{
		return fun(n - 1) + n;
	}
	else
	{
		return n;
	}
}

int main1()
{
	cout << fun(4) << endl;
	system("pause");
	return 0;
}
