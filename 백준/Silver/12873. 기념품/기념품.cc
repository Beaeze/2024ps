#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<limits.h>

using namespace std;

//12873-기념품

queue<int>q;


int main(){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		q.push(i);
	}

	long long step=1;
	while(q.size()>1){
		int ssize=q.size();
		long long now=(step*step*step-1)%ssize;
		for(int i=1;i<=now;i++){ 
			int f=q.front();
			q.pop();
			q.push(f);
		}

		q.pop();
		step++;
	}
	int re=q.front();
	cout<<re;
}