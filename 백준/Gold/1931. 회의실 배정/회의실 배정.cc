#include <iostream>
#include <string>
#include <algorithm>
#include<vector>

using namespace std;

vector<pair<int,int>>a; //끝,시작 순 입력

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	int s,e;
	int ee=-1,cnt=0;
	cin>>n;
	a.resize(n);

	for(int i=0;i<n;i++){
		cin>>a[i].second>>a[i].first; 

	}
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){
		if(a[i].second>=ee){
			ee=a[i].first;
			cnt++;
		}
	}

	cout<<cnt;

	return 0;
}

