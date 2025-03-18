#include <stdio.h>

int add();

int a, b, c, d;

int main() {

	int s = 0, t = 0;
	s = add();
	t = add();

	if (s >= t)
		printf("%d", s);
	else
		printf("%d", t);

	return 0;
}

int add() {
	int sum = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	sum = a + b + c + d;
	return sum;

}