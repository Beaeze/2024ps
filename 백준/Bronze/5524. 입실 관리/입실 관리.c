#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char Si[21];
	int n, i, j;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%s", Si);
		for (j = 0; j < strlen(Si); j++)
		{
			if ((Si[j] >= 'A') && (Si[j] <= 'Z'))
				printf("%c", Si[j] + 32);
			else
				printf("%c", Si[j]);
		}
		printf("\n");
	}
	return 0;
}

