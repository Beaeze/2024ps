#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char n;
	scanf("%c", &n);
	if ((n >= 'A') && (n <= 'z'))
		printf("%d", n);
	else if ((n >= 'a') && (n <= 'z'))
		printf("%d", n);
	else if ((n >= '0') && (n <= '9'))
		printf("%d", n);

	return 0;
}
