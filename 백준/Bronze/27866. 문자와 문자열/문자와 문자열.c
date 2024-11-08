#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char a [1000];
	int n;
	scanf("%s", a);
	scanf("%d", &n);
	n--;
	printf("%c", a[n]);

	return 0;
}
