#include <iostream>
#include <string>
#include <algorithm>
#include<vector>
#include<set>
using namespace std;

int g[501][501]={0};
//파괴:1초,설치:2초

void sol(int t){

}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n,m,b;
	int time=-1,re=0;  //최소시간, 결과
	int in=0,cnt=0; //인벤에 있는 블럭 수,걸린시간

	cin>>n>>m>>b;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>g[i][j];
		}
	}

	for(int i=256;i>=0;i--){
		in=b;
		cnt=0;
		for(int j=1;j<=n;j++){
			for(int k=1;k<=m;k++){
				if(g[j][k]>i){
					cnt+=(g[j][k]-i)*2;//제거는 2초
					in+=g[j][k]-i;//인벤에 들어온 블럭
				}
				else if(g[j][k]<i){
					cnt+=i-g[j][k];//설치 1초
					in-=i-g[j][k];
				}
			}
		}
		if(in>=0){
			if(cnt==time){
				if(i<re)continue;
			}
			if(time==-1){
				time=cnt;
				re=i;
			}
			else if(cnt<time){
				time=cnt;
				re=i;
			}
		}
	}

	cout<<time<<" "<<re;


	return 0;
}

