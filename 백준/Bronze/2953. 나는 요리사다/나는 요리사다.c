#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main() {
	int sum = 0;
	int M = 0;
	int who;
	for (int i = 1; i <= 5; i++) {
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		sum = a + b + c + d;
		if (M < sum) {
			M = sum;
			who = i;
		}
	}
	printf("%d %d", who, M);
	return 0;
}