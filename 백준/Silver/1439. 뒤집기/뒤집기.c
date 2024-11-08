#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a[1000001];
	int cnt = 0;
	scanf("%s", a);
	for (int i = 1; i < strlen(a); i++)
	{
		if (a[i-1] != a[i])
			cnt++;
	}
	
	printf("%d", (cnt + 1) / 2);
	
	return 0;
}

