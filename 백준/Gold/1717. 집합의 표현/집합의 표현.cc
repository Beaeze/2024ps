#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <queue>
#include <cmath>
#include <stdio.h>
#include <algorithm>

using namespace std;

void uni(int a,int b); // 대장끼리 합칠거
int find(int a); //대장찾기
int arr[1000001];
int main() {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m;
	int h, a, b;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		arr[i] = i;
	for (int i = 0; i < m; i++) {
		cin >> h >> a >> b;
		if (h == 0)
			uni(a, b);
		else if (h == 1) {
			int aa, bb;
			aa = find(a);
			bb = find(b);
			if (aa==bb)
				printf("YES\n");
			else
				printf("NO\n");
			
		}
	}
	return 0;
}

void uni(int a, int b) {
	int af, bf;
	af = find(a);
	bf = find(b);
	if (af < bf)
		arr[bf] = af;
	else
		arr[af] = bf;
}
int find(int a) {
	
	if (a == arr[a])
		return a;
	else
		return arr[a] = find(arr[a]); //최적화
	
}