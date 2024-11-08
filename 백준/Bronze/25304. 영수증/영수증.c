#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int  x, n, a, b, i, sum = 0, total = 0;
	scanf("%d\n%d", &x, &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		sum = a * b;
		total += sum;
	}
	if (x == total)
		printf("Yes");
	else
		printf("No");
	return 0;
}
