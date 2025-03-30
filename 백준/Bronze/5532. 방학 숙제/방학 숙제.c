#include<stdio.h>
#include<string.h>

int main(){

	int a, b, c, d, l;
	int su = 0, guk = 0;
	int suna = 0, gukna = 0;
	int cnt = 0;
	scanf("%d\n%d\n%d\n%d\n%d", &l, &a, &b, &c, &d);
	guk = a / c;
	gukna = a % c;
	su = b / d;
	suna = b % d;
	if (gukna > 0)
		guk++;
	if (suna > 0)
		su++;
	if (su >= guk)
		printf("%d", l - su);
	else
		printf("%d", l - guk);

	return 0;
}