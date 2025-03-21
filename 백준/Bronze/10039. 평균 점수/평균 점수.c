#define _CRT_SECURE_NO_WARENINGS
#include <stdio.h>


int main() {
	int a;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a);
		if (a >= 40)
			sum += a;
		else
			sum += 40;
	}
	printf("%d", sum / 5);
	return 0;

}
