#include<stdio.h>
#include <string.h>


char name[30] = "";
int ncnt[4] = { 0 };
void name_len() {
	int len = strlen(name);
	for (int i = 0; i < len; i++) {
		if (name[i] == 'L')
			ncnt[0]++;
		if (name[i] == 'O')
			ncnt[1]++;
		if (name[i] == 'V')
			ncnt[2]++;
		if (name[i] == 'E')
			ncnt[3]++;
	}
}
int cnt(char s[]) {
	int len = strlen(s);
	int l = ncnt[0], o = ncnt[1], v = ncnt[2], e = ncnt[3];
	for (int i = 0; i < len; i++) {
		if (s[i] == 'L')
			l++;
		if (s[i] == 'O')
			o++;
		if (s[i] == 'V')
			v++;
		if (s[i] == 'E')
			e++;
	}

	return ((l + o) * (l + v) * (l + e) * (o + v) * (o + e) * (v + e)) % 100;
}
int main() {
	char team[30] = "";
	int n;
	int m = 0; //점수저장
	char re[30] = ""; //점수가 높은 팀이름 저장
	scanf("%s", name);
	name_len();
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", team);
		int tmp = cnt(team);
		if (i==0|| m < tmp) {
			m = tmp;
			strcpy(re, team);
		}
		else if (m == tmp && strcmp(re, team) > 0) {
			m = tmp;
			strcpy(re, team);
		}
	}

	printf("%s", re);
	return 0;
}