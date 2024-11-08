#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	int sum1 = 0, sum2 = 0;
	scanf("%d %d\n%d", &a, &b, &c);

	if ((a, b, c >= 0) && (a <= 23) && (b <= 59) && (c <= 1000))
	{
		sum1 = (b + c) / 60;
		sum2 = (b + c) % 60;

		if ((a + sum1) == 24)
		{
			printf("%d %d", 0 , sum2);
		}
		else if ((a + sum1) > 24)
			printf("%d %d", (a + sum1) - 24, sum2);
		else
		{
			printf("%d %d", a + sum1, sum2);
		}
	}
	return 0;
}