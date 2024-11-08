#include <stdio.h>

void sort(int* arr, int n);
void swap(int* a, int* b);

int main()
{
	int n, p[1000];
	int sum = 0, num = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &p[i]);
	
	sort(p, n);

	for (int i = 0; i < n; i++)
	{
		num += p[i];
		sum += num;
	}
	printf("%d", sum);

	return 0;
}
void swap(int* a, int* b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
		}
	}
}

