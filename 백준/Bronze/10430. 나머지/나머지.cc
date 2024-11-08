#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int A, B, C;
	int sum1, sum2, sum3, sum4;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	sum1 = (A + B) % C;
	sum2 = ((A % C) + (B % C)) % C;
	sum3 = (A * B) % C;
	sum4 = ((A % C) * (B % C)) % C;

	printf("%d\n%d\n%d\n%d", sum1, sum2, sum3, sum4);

	return 0;

	
	
}