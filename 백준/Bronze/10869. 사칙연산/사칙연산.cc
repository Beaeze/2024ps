#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int A, B;
	int sum1, sum2, sum3, sum4, sum5;
	
	scanf("%d", &A);
	scanf("%d", &B);

	sum1 = A + B;
	sum2 = A - B;
	sum3 = A * B;
	sum4 = A / B;
	sum5 = A % B;

	printf("%d\n", sum1);
	printf("%d\n", sum2);
	printf("%d\n", sum3);
	printf("%d\n", sum4);
	printf("%d", sum5);

	return 0;

	
}