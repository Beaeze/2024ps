#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>

//연세워터파크-15678
//재시도

using namespace std;

long long step[5000001]={0}; //계단 값 넣기
long long dp[5000001]={0}; 

priority_queue<pair<long long,long long>>pq; //우선순위 큐(최대힙) 생성
//점수, 번수

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

    int n,d;
    cin>>n>>d;

    for(int i=1;i<=n;i++){
        cin>>step[i];
        dp[i]=step[i];

        while(!pq.empty()&&pq.top().second<i-d)pq.pop();
        
        if(!pq.empty())dp[i]=max(dp[i],dp[i]+pq.top().first);

        pq.push({dp[i],i});

    }


    long long M=-1000000000; //음수만 있을 수 있으니 큰 음수로 초기화 
    for(int i=1;i<=n;i++){
        if(M<dp[i])M=dp[i];
    }
    cout<<M;

    return 0;
	
}

