#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s[101]; //문자열
	int i, j;
	int a[26] = { 0 }; //알파벳
	scanf("%s", s);
	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < 26 ; j++)
		{
			if (s[i] == 'a' + j)
				a[s[i] - 'a']++;
		}
	}
	for (i = 0; i < 26; i++)
		printf("%d ", a[i]);

	return 0;
}