#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int check(int a,int b,int c);

int main() {
	int n;
	int a, b, c;
	int M = 0;
	int re = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		re = check(a, b, c);
		if (M < re)
			M = re;
	}
	printf("%d", M);
	return 0;
}

int check(int a,int b,int c){
	int arr[7] = { 0 };
	int cnt1 = 0;
	int cnt2 = 0;
	int cnt3 = 0;
	for (int i = 1; i < 7; i++) {
		if (i == a)
			arr[i]++;
		if (i == b)
			arr[i]++;
		if (i == c)
			arr[i]++;
	}
	for (int i = 1; i < 7; i++) {
		if (arr[i] == 0)
			continue;
		if (arr[i] == 2)
			cnt2 = i;
		if (arr[i] == 3)
			cnt3 = i;
		if (arr[i] >= 1)
			cnt1 = i;
	}  
	if (cnt2 > 0)
		return (cnt2*100+1000);
	else if (cnt3 > 0)
		return (cnt3*1000+10000);
	else
		return (cnt1*100);

}