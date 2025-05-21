#include<stdio.h>
#include <string.h>

int main() {
	int j;
	int arr[151] = { 0 }; 
	//인덱스는 점수값, 배열에는 문제 수 저장할 예정
	int cnt = 0;//최상위 5개를 위한 카운팅
	int index = 150;
	int total = 0; //총 점수
	int toindex[9] = { 0 };
	for (int i = 1; i <= 8; i++) {
		scanf("%d", &j);
		arr[j] = i; 
	}
	while (cnt != 5) {
		if (arr[index] == 0) {
			index--;
			continue;
		}
		cnt++;
		total += index;
		toindex[arr[index]] = 1;
		index--;
	}
	printf("%d\n", total);
	for (int i = 1; i <= 8; i++) {
		if (toindex[i] == 1)
			printf("%d ", i);
	}
	return 0;
}