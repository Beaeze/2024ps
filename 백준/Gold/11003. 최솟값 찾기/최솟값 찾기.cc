#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>

//우선순위 큐로 푼 풀이

using namespace std;

deque<pair<int,int>>dq;  //숫자,인덱스

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
    int n,l,num;

    cin>>n>>l;

    for(int i=1;i<=n;i++){
        cin>>num;

		//나보다 큰애 다 빼기
		while(!dq.empty()&&dq.back().first>num)dq.pop_back();
        dq.push_back({num,i});

		//l보다 더 멀어지면 앞에 빼기
        while(!dq.empty()&&dq.front().second<=i-l)dq.pop_front();
        
        cout<<dq.front().first<<" ";
    }


    return 0;
	
}

