#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int h, m;
	scanf("%d%d", &h, &m);

	if ((h <= 23) && (h >= 0) && (m <= 59) && (m >= 0))
	{
		if (h > 0)
		{
			if (m >= 45)
				printf("%d %d", h, m - 45);
			else
				printf("%d %d", h - 1, 60 + (m - 45));
		}
		else
		{
			if (m >= 45)
				printf("%d %d", h, m - 45);
			else
				printf("%d %d", 23, 60 + (m - 45));
		}
		
	}

	return 0;
}
