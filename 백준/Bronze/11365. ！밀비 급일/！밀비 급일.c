#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char a[500];
	int i, sum;
	gets(a);
	sum = strlen(a);
	while (strcmp(a,"END")!=0)
	{
		for (i = sum - 1; i >= 0; i--)
		{
			printf("%c", a[i]);
		}
		printf("\n");
		gets(a);
		sum = strlen(a);
	}
	return 0;
}

