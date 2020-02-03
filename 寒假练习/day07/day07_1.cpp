#include <iostream>
using namespace std;

int main1()
{
	char *p = "abcdefgh", *r;
	long *q;
	q = (long*)p;
	q++;
	r = (char*)q;
	printf("%s\n", r);
	system("pause");
	return 0;
}
