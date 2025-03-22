#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, k;
	int cu = 0;
	int chicken = 0;
	while (scanf("%d %d", &n, &k) != EOF) {
		cu = n;
		chicken = n;
		while (cu / k > 0) {
			int tmp = 0;
			tmp = cu / k;
			chicken += tmp;
			cu %= k;
			cu += tmp;
		}
		printf("%d\n", chicken);
	}
	return 0;
}