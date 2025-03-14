#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main() {
	int a, b, c;
	int arr[3];
	char str[4];
	scanf("%d %d %d", &a, &b, &c);
	scanf("%s", str);
	if (a < b&&a<c) {
		arr[0] = a;
		if (b < c) {
			arr[1] = b;
			arr[2] = c;
		}
		else {
			arr[1] = c;
			arr[2] = b;
		}
	}
	else if (b < a && b < c) {
		arr[0] = b;
		if (a < c) {
			arr[1] = a;
			arr[2] = c;
		}
		else{
			arr[1] = c;
			arr[2] = a;
		}
	}
	else {
		arr[0] = c;
		if (a < b) {
			arr[1] = a;
			arr[2] = b;
		}
		else {
			arr[1] = b;
			arr[2] = a;
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%d ", arr[str[i] - 'A']);
	}
	return 0;
}