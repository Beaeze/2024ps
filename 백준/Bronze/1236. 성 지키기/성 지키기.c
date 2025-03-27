#include<stdio.h>
#include<string.h>

int main(){
	int n, m;
	char str[51][51];
	int ncnt = 0, mcnt = 0; //n:경비병이 없는 행,m:없는 열
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%s", str[i]);
	for (int i = 0; i < n; i++) {
		ncnt++;
		for (int j = 0; j < m; j++) {
			if (str[i][j] == 'X') {
				ncnt--;
				break;
			}

		}
	}
	for (int i = 0; i < m; i++) {
		mcnt++;
		for (int j = 0; j < n; j++) {
			if (str[j][i] == 'X') {
				mcnt--;
				break;
			}

		}
	}
	if (ncnt >= mcnt)
		printf("%d", ncnt);
	else
		printf("%d", mcnt);
	return 0;
}