#include <stdio.h>
#include <malloc.h>
#include <string.h>
void push(int x);
void pop();
void size();
void empty();
void top();
int stack[10001];
int ssize = 0;
int main() {
	int n, x;
	char str[10];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %d", str, &x);
		if (strcmp(str, "push") == 0)
			push(x);
		else if (strcmp(str, "pop") == 0)
			pop();
		else if (strcmp(str, "size") == 0)
			size();
		else if (strcmp(str, "empty") == 0)
			empty();
		else if (strcmp(str, "top") == 0)
			top();
	}
	return 0;
}

void push(int x) {
	ssize++;
	stack[ssize] = x;
}
void pop() {
	if (ssize == 0)
		printf("-1\n");
	else {
		printf("%d\n", stack[ssize--]);
	}
}
void size() {
	printf("%d\n", ssize);
}
void empty() {
	if (ssize == 0)
		printf("1\n");
	else
		printf("0\n");
}
void top() {
	if (ssize == 0)
		printf("-1\n");
	else {
		printf("%d\n", stack[ssize]);
	}
}