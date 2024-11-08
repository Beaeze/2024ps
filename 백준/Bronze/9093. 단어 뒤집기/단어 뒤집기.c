#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void ch(char a[]);

int main()
{
	int n;
	char a[1001];
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		gets(a);
		ch(a);
	}
	
	
	return 0;
}

void ch(char a[])
{
	int can = 0;
	for (int i = 0; i <= strlen(a); i++)
	{
		if (a[i] == '\0')
		{
			for (int j = i - 1; j >= i - can; j--)
			{
				printf("%c", a[j]);
			}
		}
		else if ((a[i] != ' '))
			can++;
		else if ((a[i] == ' '))
		{
			for (int j = i-1; j >= i - can; j--)
			{
				printf("%c", a[j]);
			}
			printf(" ");
			can = 0;
		}
	}

	printf("\n");
	
}