#include<stdio.h>
#include <string.h>

int main() {
	char str[10];
	int n;
	char a[3];
	int re = 0;//결과 저장
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int hour, minute; //시작 시간 저장
		int add;
		scanf("%s %s", str, a);
		hour = (str[0] - '0') * 10 + (str[1] - '0');
		minute = (str[3] - '0') * 10 + (str[4] - '0');
		add = (a[0] - '0') * 10 + (a[1] - '0');

		for (int i = 0; i < add; i++) {
			if (hour >= 7 && hour < 19)
				re += 10;
			else
				re += 5;
			minute++;
			if (minute > 59) {
				hour++;
				minute -= 60;
			}
			if (hour > 23) {
				hour -= 24;
			}
		}
		
	}
	printf("%d", re);
	return 0;
}