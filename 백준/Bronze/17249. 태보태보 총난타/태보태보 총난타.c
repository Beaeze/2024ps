#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char a[1001];
	int r = 0, l = 0;
	scanf("%s", a);
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == '@')
			l++;
		else if (a[i] == '(')
		{
			for (; i < strlen(a); i++)
			{
				if (a[i] == '@')
					r++;
			}
			break;
		}
	}
	
	printf("%d %d", l, r);
	return 0;
}

