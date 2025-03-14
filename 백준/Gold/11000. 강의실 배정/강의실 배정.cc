#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <queue>
#include <cmath>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	priority_queue<int,vector<int>,greater<int>>s;
	priority_queue<int, vector<int>, greater<int>>e; //int인자는 최대힙
	//pq.top() 우선순위 출력
	//pq.pop() 우선순위 뽑아냄
	//pq.size()
	//pq.empty() 비어있으면 true 반환
	//pq.push(x)
	int n;
	int S,E;
	int room = 0;
	int M = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> S >> E;
		s.push(S);
		e.push(E);
	}
	while (!s.empty()) {
		if (s.top() >= e.top()) {
			room--;
			e.pop();
		}
		else if (s.top() < e.top()) {
			room++;
			s.pop();
		}
		if (M < room)
			M = room;
	}

	cout << M;
	return 0;
}