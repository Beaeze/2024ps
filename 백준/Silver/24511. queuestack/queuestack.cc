#include <stdio.h>
#include<string.h>
#include <stack>   //24511
#include <queue>

using namespace std;

int sq[100000];
int dt[100000];

int main()
{
	
	int n, m, a;
	queue<int>q;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &sq[i]);
	for (int i = 0; i < n; i++)
		scanf("%d", &dt[i]);

	for (int i = n - 1; i >= 0; i--) {
		if (sq[i])continue;
		q.push(dt[i]);
	}

	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &a);
		q.push(a);
		printf("%d ", q.front());
		q.pop();
	}
	
		
	return 0;
}
