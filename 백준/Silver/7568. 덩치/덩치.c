#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int x[50], y[50], k[50];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d %d", &x[i], &y[i]);

	for (int i = 0;i < n; i++)
	{
		k[i] = 1;
		for (int j = 0; j < n; j++)
		{
			if(i==j)
				continue;
			else if ((x[i] < x[j]) && (y[i] < y[j]))
				k[i]++;
			else
				continue;
		}
	}

	for (int i = 0; i < n; i++)
		printf("%d ", k[i]);

	return 0;

}