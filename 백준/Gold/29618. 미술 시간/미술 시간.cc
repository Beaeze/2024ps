#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <queue>
#include <cmath>
#include <stdio.h>
#include <algorithm>

using namespace std;
//미술시간은 색칠한 집합과 색칠하지 않은 집합이 존재함
void uni(int a,int b); // 대장끼리 합칠거
int color[100001]={0}; //색칠한 색깔을 대빵이 한테만 넣어줌
int jump[100001]={0}; //색칠한 곳 범위에 마지막 꼬리부분의 값을 넣어줌
int x;
int main() {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n,m; //n : 칸의 개수, m : 횟수수
	int a, b;
	for(int i=1;i<=100001;i++)
		jump[i]=i+1;
    cin>>n>>m;
	for (int i = 1; i <= m; i++) {
		cin >> a>>b>>x;
		while(a<=b){
			if(color[a]==0)
				color[a]=x;
			int next=jump[a];
			jump[a]=b+1;
			a=next;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<color[i]<<' ';
	}
	
	return 0;
}
