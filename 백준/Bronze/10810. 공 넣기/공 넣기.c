#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100] = {0}; //바구니
	int n, m, i, j, k;
	int u, t;
	
	scanf("%d%d", &n, &m);
	
	for (u = 0; u < m; u++)
	{
		scanf("%d%d%d", &i, &j, &k);
		for (t=i; t <= j; t++)
		{
			a[t-1] = k;
		}
	}
	for (u = 0; u < n; u++)
	{
		printf("%d ", a[u]);
	}
	return 0;
}
	
