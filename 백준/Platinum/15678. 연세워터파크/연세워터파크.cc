#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>



using namespace std;

long long step[100001]={0}; //계단 값 넣기
vector<long long>dp(100001,0); //현재 index만큼의 징검다리의 위치까지 왔을때의 점수

priority_queue<pair<long long,long long>>pq; //우선순위 큐(최대힙) 생성
//값, 인덱스

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
    int n,d;

    cin>>n>>d;

    for(int i=1;i<=n;i++){
        cin>>step[i];
        dp[i]=step[i];
        
        //d보다 더 먼거리에 있는것들 제외
        //현재 가장 우선순위가 높은애가 범위에 벗어난 애면 제거
        while(pq.size()>0&&pq.top().second<i-d)pq.pop();
         
        if(pq.size()>0&&pq.top().first>0)dp[i]+=pq.top().first;
        pq.push(make_pair(dp[i],i));
    }

    long long M=-10000000000;
    for(int i=1;i<=n;i++){
        M=max(M,dp[i]);
    }
    
    cout<<M;

    return 0;
	
}

