#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>

//5977-Mowing the Lawn

using namespace std;

vector<pair<long long,long long>>cow; //소 효율, 누적합
vector<long long>dp(100001,0); 

//단조덱 사용
deque<pair<long long, int>>dq; //값, 인덱스

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

    //인덱스0을 사용안하려고 넣음
    cow.push_back({0,0});
    dq.push_back({0,0});
    
    int n,k;
    int a;
    cin>>n>>k;

    for(int i=1;i<=n;i++){
        cin>>a;
        cow.push_back({a,a+cow[i-1].second});
        
        //현재와 k만큼 먼거 다 빼기 앞에서
        while(!dq.empty()&&dq.front().second<i-k)dq.pop_front();

        dp[i]=cow[i].second+dq.front().first;
        //현재값 + 덱에 있는 최댓값,지금까지의 최댓값
        dp[i]=max(dp[i],dp[i-1]);
        
        //현재 dp값
        while(!dq.empty()&&dq.back().first<dp[i-1]-cow[i].second)dq.pop_back();
        dq.push_back({dp[i-1]-cow[i].second,i});

    }

    cout<<dp[n]<<" ";

    return 0;
	
}

