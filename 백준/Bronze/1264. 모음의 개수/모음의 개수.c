#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char a[255];
	int i, cnt = 0;
	gets(a);
	while (strcmp(a, "#") != 0)
	{
		for (i = 0; i < strlen(a); i++)
		{
			if ((a[i] == 'a') || (a[i] == 'e') || (a[i] == 'i') || (a[i] == 'o') || (a[i] == 'u'))
				cnt++;
			else if ((a[i] == 'A') || (a[i] == 'E') || (a[i] == 'I') || (a[i] == 'O') || (a[i] == 'U'))
				cnt++;
		}
		printf("%d\n", cnt);
		cnt = 0;
		gets(a);
	}
	return 0;
}