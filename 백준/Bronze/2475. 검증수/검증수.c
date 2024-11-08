#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{

	int arr[10];
	int sum = 0;

	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	sum = (arr[0] * arr[0] + arr[1] * arr[1] + arr[2] * arr[2] + arr[3] * arr[3] + arr[4] * arr[4])%10;
	printf("%d", sum);
	return 0;
}
