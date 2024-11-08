#include <stdio.h>

int visit[101];
int cnt = 0;
int i, j;
int computer[101][101] = { 0 };
int n, m;

void dfs(int t,int n) {
	visit[t] = 1;
	if (t != 1)
		cnt++;
	for (int i = 1; i <= n; i++) {
		if ((visit[i] == 1) || (!computer[t][i]))
			continue;
		dfs(i, n);
	}
}

int main()
{
	scanf("%d", &n);
	scanf("%d",&m );

	for (int k = 0; k < m; k++) {
		scanf("%d %d", &i, &j);
		computer[i][j] = 1;
		computer[j][i] = 1;
	}

	dfs(1, n);
	printf("%d", cnt);
	return 0;

}







