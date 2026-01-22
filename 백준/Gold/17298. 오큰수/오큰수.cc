#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<limits.h>

using namespace std;

stack<int>s;
//pair<높이,순서>
vector<int>arr;
vector<int>re;

int main(){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		arr.push_back(a);
	}
	int size=arr.size();

	for(int i=size-1;i>=0;i--){
		a=arr[i];
		while(!s.empty()){
			int one= s.top();
			if(one>a)break;
			s.pop();
		}
		if(s.empty())re.push_back(-1);
		else re.push_back(s.top());

		s.push(a);
	}

	for(int i=size-1;i>=0;i--)cout<<re[i]<<" ";

	return 0;

}