#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	char str[5][16];
	char store[76];
	int num[5] = { 0 };
	int m = 0, cnt = 0;
	for (int i = 0; i < 5; i++) {
		int len = 0;
		scanf("%s", str[i]);
		len = strlen(str[i]);
		if (m < len)
			m = len;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < 5; j++) {
			if (str[j][i]==NULL) {
				num[j]++;
				continue;
			}
			else if ((num[j] != 0)) {
				continue;
			}
			else {
				store[cnt] = str[j][i];
			}
			cnt++;
		}
	}
	store[cnt] = NULL;
	printf("%s", store);
	return 0;
}
