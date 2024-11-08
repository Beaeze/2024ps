#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void swap(int*, int*);

int main(void) {
	
	int n, m; //n바구니 개수, m바꿀횟수
	int i, j;
	int bk[100];

	scanf("%d %d", &n, &m);
	for (int k = 0; k < n; k++) 
		bk[k] = k + 1;
	
	for (int k = 0; k < m; k++) {
		scanf("%d %d", &i, &j);
		swap(&bk[i-1], &bk[j-1]);
	}

	for (int i = 0; i < n; i++)
		printf("%d ", bk[i]);

	return 0;
}

void swap(int* a, int* b) {
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}


