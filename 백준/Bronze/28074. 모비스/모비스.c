#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char a[101];
	int i, j;
	int s[5] = { 0 };
	scanf("%s", a);

	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] == 'M')
			s[0]++;
		else if (a[i] == 'O')
			s[1]++;
		else if (a[i] == 'B')
			s[2]++;
		else if (a[i] == 'I')
			s[3]++;
		else if (a[i] == 'S')
			s[4]++;
	}
	if ((s[0] > 0) && (s[1] > 0) && (s[2] > 0) && (s[3] > 0) && (s[4] > 0))
		printf("YES");
	else
		printf("NO");

	return 0;
}

