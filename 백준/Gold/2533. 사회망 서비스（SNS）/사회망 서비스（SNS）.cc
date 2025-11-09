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
int dp[2][1000001]={0}; //결과 저장 행0:내가 얼리 아님,1:내가 얼리

void dfs(int node){
	v[node]=1; //방문 처리
	dp[0][node]=0; //내가 얼리가 아닌경우
	dp[1][node]=1; //내가 얼리인 경우

	//현재 노드랑 연결된
	for(auto i : tree[node]){ //한점이랑 연결된 얘 다 돌기
		if(v[i])continue;
		dfs(i); //현재 나랑 연결된 애들 다 돌기
		//내가 얼리가 아닌경우-자식이 다 얼리여야함
		dp[0][node]+=dp[1][i];
		//내가 얼리인 경우-자식이 뭐 오든 상관 없어서 최솟값
		dp[1][node]+=min(dp[0][i],dp[1][i]);  
	}

}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

	int a,b;
	cin>>n;
	for(int i=1;i<n;i++){
		cin>>a>>b; //직속 상사 번호 입력
		tree[a].push_back(b); //방향그래프
		tree[b].push_back(a);
	}
	dfs(1);
	cout<<min(dp[0][1],dp[1][1]);
	return 0;
}
