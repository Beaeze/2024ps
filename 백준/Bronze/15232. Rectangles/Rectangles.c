#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main() {

	int n,m;
	scanf("%d\n%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}