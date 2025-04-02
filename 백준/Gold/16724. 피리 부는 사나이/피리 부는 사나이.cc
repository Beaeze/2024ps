#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <queue>
#include <cmath>
#include <stdio.h>
#include <algorithm>

using namespace std;
char map[1001][1001];
int vi[1001][1001] = { 0 }; //방문여부
int cnt = 0;
int num=0;
int i,j;
int a, b;
void dfs(int x, int y);
int main() {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	

	cin >> a >> b;
	for (int k = 0; k < a; k++){
		cin >> map[k];
	}

	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			if (vi[i][j] == 1)
				continue;
			else{
				num++;
				dfs(i, j);
			}
		}
	}
	cout << cnt;

	return 0;
}
void dfs(int x, int y) {
	int nx[4] = { -1,0,1,0 };
	int ny[4] = { 0,1,0,-1 };  //12시부터 시계방향
	if (map[x][y] == 'U') {
		if (vi[x][y] == num) {
			cnt++;
			return;
		}
		else if(vi[x][y]>0)
			return;
		vi[x][y] += num;
		dfs(x + nx[0], y + ny[0]);
	}
	else if (map[x][y] == 'R') {
		if (vi[x][y] == num) {
			cnt++;
			return;
		}
		else if(vi[x][y]>0)
			return;
		vi[x][y] += num;
		dfs(x + nx[1], y + ny[1]);
	}
	else if (map[x][y] == 'D') {
		if (vi[x][y] == num) {
			cnt++;
			return;
		}
		else if(vi[x][y]>0)
			return;
		vi[x][y] += num;
		dfs(x + nx[2], y + ny[2]);
	}
	else if (map[x][y] == 'L') {
		if (vi[x][y] == num) {
			cnt++;
			return;
		}
		else if(vi[x][y]>0)
			return;
		vi[x][y] += num;
		dfs(x + nx[3], y + ny[3]);
	}
}