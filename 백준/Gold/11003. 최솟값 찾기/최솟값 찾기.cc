#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>

//우선순위 큐로 푼 풀이

using namespace std;

long long step[5000001]={0}; //계단 값 넣기

priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>pq; //우선순위 큐(최대힙) 생성


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
    int n,l;

    cin>>n>>l;

    for(int i=1;i<=n;i++){
        cin>>step[i];
        pq.push(make_pair(step[i],i));

        while(!pq.empty()&&pq.top().second<=i-l)pq.pop();
        cout<<pq.top().first<<" ";
    }


    return 0;
	
}

