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
 // 대장끼리 합칠거
int color[100001]={0}; //색칠한 색깔을 대빵이 한테만 넣어줌
int jump[100001]={0}; //색칠한 곳 범위에 마지막 꼬리부분의 값을 넣어줌
int x;
int main() {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n,m; //n : 칸의 개수, m : 횟수수
	int a, b;
    cin>>n>>m;
	for (int i = 0; i < m; i++) {
		cin >> a>>b>>x;
		
    while(a<=b){
		if(jump[a]){
            int next=jump[a];
            jump[a]=b+1;
            a=next;
			continue;
		}
		color[a]=x;
		jump[a]=b+1;
		a++;
	}
	for(int i=a;i<=b;i++){
		jump[i]=b;
    }
	}
	for(int i=1;i<=n;i++){
		cout<<color[i]<<' ';
	}
	
	return 0;
}

