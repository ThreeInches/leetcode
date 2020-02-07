#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main2()
{
	char s[] = "abcdefgh", *p = s;
	p += 3;
	printf("%d\n", strlen(strcpy(p, "ABCD")));
	system("pause");
	return 0;
}