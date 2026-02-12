#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<limits.h>


using namespace std;

//28066-타노스는 요세푸스가 밉다

queue<int>q;


int main(){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int n,k;
	cin>>n>>k;

	for(int i=1;i<=n;i++)q.push(i);

	while(q.size()>k){
		//1번 뒤로 보내기
		int one=q.front();
		q.pop();
		q.push(one);
		for(int i=0;i<k-1;i++)q.pop();

	}

	cout<<q.front();

	return 0;
}

