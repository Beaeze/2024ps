#include <stdio.h>
#include <malloc.h>


void ertos(int,int*);
int cnt = 0;

int main()
{
	int* arr;
	int n;
	scanf("%d", &n);
	arr = (int*)calloc(sizeof(int) , n+1);

	ertos(n, arr);

	printf("%d\n", cnt);
	for (int i = 1; i <= n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;

}

void ertos(int n, int* arr) {
	arr[1] = ++cnt;
	for (long long i = 2; i <= n; i++) {
		if (arr[i] == 0) {
			cnt++;
			arr[i] = cnt;
		}
		else continue;
		for (long long j = i * i; j <= n; j+=i) {
			arr[j] = arr[i];
		}
	}
}






