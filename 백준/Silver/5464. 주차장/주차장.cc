#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<limits.h>

using namespace std;

//5464-주차장

int s[101]; //단위 무게 당 요금
int car[2002]; //차량 무게

queue<int>wait;//기다리는 차 저장


int main(){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int n,m; //주차공간,차량수
	int cnt=0;

	cin>>n>>m;
	vector<pair<int,int>> park(n, {0, -1}); // 주차공간 상태:{차량번호, 자리번호}, 비어있으면 0, -1
	
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int i=1;i<=m;i++){
		cin>>car[i];
	}

	int state;
	int emp=n; //빈공간 개수

	for(int i=1;i<=m*2;i++){
		cin>>state;
		if(state>0){
			if(emp==0)wait.push(state);
			else{
				for(int i=0;i<n;i++){
					if(park[i].first==0){
						emp--;
						park[i].first=state;
						park[i].second=i+1;
						cnt+=car[state]*s[i+1];
						break;
					}
				}
			}
		}
		else{
			int now;
			for(int i=0;i<n;i++){
				if(park[i].first==-state){
					now=i;
				}
			}

			park[now].first=0;//비우기
			park[now].second=-1;//비우기
			emp++; //빈공간증가
			if(wait.size()>0){
				int next_car = wait.front(); //새로 들어오는 차량번호

				park[now].first=wait.front();
				park[now].second=now;
				cnt+=car[next_car]*s[now+1];
				wait.pop();
				emp--;
			}
		}


	}

	cout<<cnt;
	return 0;
}