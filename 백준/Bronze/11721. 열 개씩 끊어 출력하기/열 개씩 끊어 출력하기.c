#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char n[100];
	int i;
	scanf("%s", n);

	for (i = 0; i < strlen(n); i++)
	{
		if ((i + 1) % 10 == 0)
		{
			printf("%c", n[i]);
			printf("\n");
		}
		else
			printf("%c", n[i]);

	}
	return 0;
}

