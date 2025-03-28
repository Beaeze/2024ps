#include <stdio.h>
#include<string.h>

void push(int a);
void pop();
void size();
void empty();
void front();
void back();

int arr[2000001] = { 0 };
int cnt = 0;
int p = 0;

int main() {

	int n;
	char str[10];
	int a;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", str);
		if (strcmp(str, "push") == 0){
            scanf("%d",&a);
			push(a);
        }
		else if (strcmp(str, "pop") == 0)
			pop();
		else if (strcmp(str, "size") == 0)
			size();
		else if (strcmp(str, "empty") == 0)
			empty();
		else if (strcmp(str, "front") == 0)
			front();
		else if (strcmp(str, "back") == 0)
			back();
	}
	return 0;
}

void push(int a) {
	arr[cnt+p] = a;
	cnt++;
}
void pop() {
	if (arr[p] == 0){
		printf("-1\n");
    }
	else {
		printf("%d\n", arr[p]);
		arr[p]=0;
		p++;
		cnt--;
	}
}
void size() {
	printf("%d\n", cnt);
}
void empty() {
	if (cnt > 0)
		printf("0\n");
	else
		printf("1\n");
}
void front() {
	if (cnt == 0)
		printf("-1\n");
	else
		printf("%d\n", arr[p]);
}
void back() {  
	if (cnt == 0)
		printf("-1\n");
	else
		printf("%d\n", arr[p+cnt-1]);
}