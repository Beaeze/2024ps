#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <queue>
#include <cmath>
#include <stack>

using namespace std;

stack<int> s;
vector<int> arr;
vector<char> c;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

	int n,x;
	int cnt=0;
	int len;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;//수열
		arr.push_back(x);
	}
	x=1; //1~n
	while(cnt<n){
		//넣기
		while(arr[cnt]>=x){
			c.push_back('+');
			s.push(x);
			x++;
		}
		if(arr[cnt]<s.top()){
			printf("NO");
			return 0;
		}
		//빼기
		while(!s.empty()&&arr[cnt]==s.top()){
			c.push_back('-');
			s.pop();
			cnt++;
		}
		if(!s.empty()&&arr[cnt]<s.top()){
			cout<<"NO";
			return 0;
		}
	}

	len=c.size();
	for(int i=0;i<len;i++)
		cout<<c[i]<<'\n';
	return 0;
}
