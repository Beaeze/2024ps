#define _CRT_SECURE_NO_WARENINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = n; i >= 1; i--) {
		for (int j = i; j < n; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
