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
int cnt[1000001];
int main() {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	char h;
	int a, b;
	for (int i = 0; i < 1000001; i++) {
		arr[i] = i;
		cnt[i] = 1;
	}
    cin>>n;
	for (int i = 0; i < n; i++) {
		cin >> h;
		if (h == 'I') {
			cin >> a >> b;
			uni(a, b);
		}
		else if (h == 'Q') {
			cin >> a;
			cout << cnt[find(a)]<<"\n";
		}
	}
	return 0;
}

void uni(int a, int b) {
	int af, bf;
	af = find(a);
	bf = find(b);
    if(af==bf)
        return ;
	if (af < bf) {
		cnt[af] += cnt[bf];
		arr[bf] = af;
	}
	else {
		cnt[bf] += cnt[af];
		arr[af] = bf;
	}
}
int find(int a) {
	
	if (a == arr[a])
		return a;
	else
		return arr[a] = find(arr[a]); //최적화
	
}