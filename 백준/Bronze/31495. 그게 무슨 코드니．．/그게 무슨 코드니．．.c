#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s[51];
	int i;
	gets(s);
	if ((s[0] == '"') && (s[strlen(s) - 1] == '"') && (strlen(s)>=3))
	{
		for (i = 1; i < strlen(s)-1; i++)
			printf("%c", s[i]);
		
	}
	else
		printf("CE");

	return 0;            
}


