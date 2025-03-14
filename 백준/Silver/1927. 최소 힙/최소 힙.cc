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
	priority_queue<int,vector<int>,greater<int>>pq; //int인자는 최대힙
	//pq.top() 우선순위 출력
	//pq.pop() 우선순위 뽑아냄
	//pq.size()
	//pq.empty() 비어있으면 true 반환
	//pq.push(x)
	int n;
	int x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 0) {
			if (pq.empty())
				cout << "0\n";
			else {
				cout << pq.top()<<"\n";
				pq.pop();
			}
		}
		else {
			pq.push(x);
		}
			
	}
	return 0;
}