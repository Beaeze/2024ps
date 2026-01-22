#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<limits.h>

using namespace std;

stack<pair<int,int>>s;
//pair<높이,순서>

int main(){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int n,a;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>a;
		while(!s.empty()){
			int one= s.top().first;
			if(one>a)break;
			s.pop();
		}
		if(s.empty())cout<<"0 ";
		else cout<<s.top().second<<" ";

		s.push(make_pair(a,i));
	}

	return 0;

}