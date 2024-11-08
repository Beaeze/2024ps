#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char a[10000];
	int i, n,sum=0;  //'0'=48
	scanf("%d", &n);
	scanf("%s", a);
	for (i = 0; i < n; i++)
	{
		sum += a[i]-48;
	}
	printf("%d", sum);

	return 0;
}
	
