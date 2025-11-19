#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <queue>
#include <cmath>
#include <stack>

using namespace std;

vector<int>tree[1000001];
int v[1000001]={0};
int n;
int dp[2][1000001]={0}; //결과 저장 행0:내가 우수 아님,1:내가 우수

int human[10001]={0}; //주민 수 저장

void dfs(int node){
	v[node]=1; //방문 처리
	dp[0][node]=0; //내가 우수 아닌 경우
	dp[1][node]=human[node]; //내가 우수인 경우

	//현재 노드랑 연결된
	for(auto i : tree[node]){ //한점이랑 연결된 얘 다 돌기
		int now=dp[0][node]; //현재의 총 주민 수 저장
		if(v[i])continue; //방문한 경우
		dfs(i); //현재 나랑 연결된 애들 다 돌기

		//내가 우수가 아닌경우-인접 중 1개는 우수
		dp[0][node]+=max(dp[0][i],dp[1][i]);
		//내가 우수인 경우-우수 인접 안됨
		dp[1][node]+=dp[0][i];
	}

}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

	int a,b;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>human[i]; //주민수 입력
	for(int i=1;i<n;i++){
		cin>>a>>b; 
		tree[a].push_back(b); //방향그래프
		tree[b].push_back(a);
	}
	dfs(1);
	cout<<max(dp[0][1],dp[1][1]);
	return 0;
}
