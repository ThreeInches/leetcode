#include <iostream>
using namespace std;

int a, b;
void fun()
{
	a = 100;
	b = 200;
}

int main1()
{
	int a = 5, b = 7;
	fun();
	printf("%d %d", a, b);
	system("pause");
	return 0;
}
