#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);
	
	if ((a % 2) != 0)
	{
		if (((b - (a - 1)) % 2) == 0)
			printf("%d", (b - (a - 1)) / 2);
		else
			printf("%d", ((b - (a - 1)) / 2) + 1);
	}
	else
	{
		if (((b - a) % 2) == 0)
			printf("%d", (b - a) / 2 + 1);
		else
			printf("%d", (b - a) / 2 + 2);
	}

	return 0;
}