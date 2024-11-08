#include <stdio.h>
#include <stack>   
#include <queue>
#include<string.h>

void push_front(int);
void push_back(int);
void pop_front();
void pop_back();
void size();
void empty();
void front();
void back();
int deque[20000]; //앞에서 들어올 만개, 뒤에서 들어올 만개
int f = 10000, b = 10000;

int main()
{
	int n, a;
	char arr[20];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", arr);
		if (strcmp(arr, "push_front") == 0) {
			scanf("%d", &a);
			push_front(a);
		}
		else if (strcmp(arr, "push_back") == 0) {
			scanf("%d", &a);
			push_back(a);
		}
		else if (strcmp(arr, "pop_front") == 0)
			pop_front();
		else if (strcmp(arr, "pop_back") == 0)
			pop_back();
		else if (strcmp(arr, "size") == 0)
			size();
		else if (strcmp(arr, "empty") == 0)
			empty();
		else if (strcmp(arr, "front") == 0)
			front();
		else if (strcmp(arr, "back") == 0)
			back();

	}
	return 0;

}

void push_front(int item)
{
	deque[--f] = item;
}
void push_back(int item)
{
	deque[b++] = item;
}
void pop_front()
{
	if (f == b)
		printf("-1\n");
	else
		printf("%d\n", deque[f++]);

}
void pop_back()
{
	if (f == b)
		printf("-1\n");
	else
		printf("%d\n", deque[--b]);
}
void size()
{
	printf("%d\n", b - f);
}
void empty()
{
	if (f == b)
		printf("1\n");
	else
		printf("0\n");
}
void front()
{
	if (f == b)
		printf("-1\n");
	else
		printf("%d\n", deque[f]);
}
void back()
{
	if (f == b)
		printf("-1\n");
	else
		printf("%d\n", deque[b - 1]);
}