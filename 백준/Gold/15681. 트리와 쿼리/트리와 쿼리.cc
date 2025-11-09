#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <queue>
#include <cmath>
#include <stack>

using namespace std;

vector<int>tree[100001];
int vi[100001]={0};
int n;
int dp[100001]={0};


void dfs(int node){
	vi[node]=1; //방문 처리
	dp[node]+=1; //자기 자신 값 추가

	//현재 노드랑 연결된
	for(auto i : tree[node]){ //한점이랑 연결된 얘 다 돌기
		if(vi[i])continue; //방문 한 경우
		dfs(i); //방문 안했으면
		dp[node]+=dp[i]; 
	}

}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

	int R,Q; //루트 번호,쿼리 수
	int a,b;
	cin>>n>>R>>Q;

	for(int i=1;i<n;i++){
		cin>>a>>b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	dfs(R); //R을 루트로
	for(int i=0;i<Q;i++){
		cin>>a;
		cout<<dp[a]<<"\n";
	}

	return 0;
}
