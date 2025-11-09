#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <queue>
#include <cmath>
#include <stack>

using namespace std;

vector<int>tree[100001];
int n;
int dp[100001]={0}; //칭찬 결과 저장
int w;

void dfs(int node){
	//현재 노드랑 연결된
	for(auto i : tree[node]){ //한점이랑 연결된 얘 다 돌기
		dp[i]+=dp[node];  //현재 가지고 있는 칭찬을 자식한테
		dfs(i); //방문 안했으면
	}

}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

	int m; //칭찬 횟수
	int ceo; //대빵이 저장
	int a;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a; //직속 상사 번호 입력
		if(a==-1){
			ceo=i;
			continue;
		}
		tree[a].push_back(i); //방향그래프
	}

	for(int i=0;i<m;i++){
		cin>>a>>w;
		dp[a]+=w;
	}
	dfs(ceo);
	for(int i=1;i<=n;i++)cout<<dp[i]<<" ";
	return 0;
}
