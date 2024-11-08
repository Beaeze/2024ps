#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[10000], x;
	int i, n1, n2;
	scanf("%d %d", &n1, &n2);
	for (i = 0; i < n1; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n1; i++)
	{
		if (n2 > arr[i])
			printf("%d ", arr[i]);
	}
		
	return 0;
}
