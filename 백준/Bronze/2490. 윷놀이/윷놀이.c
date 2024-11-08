#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, i, j;
	int cnt = 0;
	int y[3][4];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			scanf("%d", &y[i][j]);
	}
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (y[i][j] == 0)
				cnt++;
		}
		if (cnt == 1)
			printf("A\n");
		else if(cnt == 2)
			printf("B\n");
		else if(cnt == 3)
			printf("C\n");
		else if(cnt == 4)
			printf("D\n");
		else
			printf("E\n");
		cnt = 0;
	}
	return 0;

}