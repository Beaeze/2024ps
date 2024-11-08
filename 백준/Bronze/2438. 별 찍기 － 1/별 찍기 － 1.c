#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, n, dan;
	
	scanf("%d", &dan);
	
	for (i = 1; i <= dan; i++)
	{
		for (n = 1; n <= i; n++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
