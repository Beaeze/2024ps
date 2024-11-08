#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double A, B, C;
	
	scanf("%lf", &A);
	scanf("%lf", &B);

	C = A/B;
	printf("%0.9lf", C);

	return 0;

}