#include <iostream>
using namespace std;

int main3()
{
	int a[] = { 2, 4, 6, 8, 10 }, *p, **k;
	p = a;
	k = &p;
	printf("%d ", *(p++));
	printf("%d\n", **k);
	system("pause");
	return 0;
}
