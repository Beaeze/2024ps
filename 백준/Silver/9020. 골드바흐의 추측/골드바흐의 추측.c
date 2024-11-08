#include <stdio.h>
#include <math.h>

void ertos(int);

int main()
{
	int a;
	int n;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &n);
		ertos(n);
	}
		
	return 0;

}

void ertos(int n) {
	int arr[10001] = { 0 };
	for (int i = 2; i <= sqrt(n); i++) {
		for (int j = i * i; j <= n; j += i) {
			if (j % i == 0)
				arr[j] = 1;	
		}
	}
	for (int i = n/2; i>=2; i--) {
		if (arr[i] == 0) {
			if ((arr[n - i] == 0) && (i <= (n - i))) {
				printf("%d %d ", i, n - i);
				break;
			}
		}	
	}
	printf("\n");	
		
}






