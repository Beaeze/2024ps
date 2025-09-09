#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <queue>
#include <cmath>
#include <stdio.h>
#include <algorithm>

using namespace std;

vector<int>arr[100001];
bool vi[100001]; //방문확인
int n, m, v;
int cnt = 0;

void dfs(int x) {
	vi[x] = 1; //방문 함
	printf("%d ", x);
	for (int i = 0; i <arr[x].size(); i++) {
		if (vi[arr[x][i]]) // 방문
			continue;
		dfs(arr[x][i]);
	}
}

void bfs(int x) {
	queue<int>q;
	q.push(x);
	vi[x] = 1;
	while (!q.empty()) {
		int now = q.front();
		printf("%d ", now);
		q.pop();
		for (auto i : arr[now]) {
			if (vi[i])continue;
			vi[i] = 1;
			q.push(i);
		}
	}
}

int main() {

	scanf("%d %d %d", &n, &m, &v);
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	for (int i = 0; i <= 100000; i++) {
		sort(arr[i].begin(), arr[i].end());
	}
	dfs(v);
	printf("\n");
	for (int i = 1; i <= n; i++)
		vi[i] = 0;
	bfs(v);
	
	return 0;
}