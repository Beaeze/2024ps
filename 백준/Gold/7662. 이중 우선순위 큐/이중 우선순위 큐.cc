#include <iostream>
#include <string>
#include <algorithm>
#include<vector>
#include<set>
using namespace std;


void sol(int t){
	multiset<int>ms;
	char c;
	int input;
	for(int i=0;i<t;i++){
		cin>>c>>input;
		if(c=='I'){
			ms.insert(input);
		}
		else if(c=='D'){
			if(ms.empty())continue;
			if(input==-1)ms.erase(ms.begin());
			else if(input==1)ms.erase(--ms.end());
		}
	}
	if(ms.empty())cout<<"EMPTY"<<endl;
	else cout<<*(--ms.end())<<" "<<*(ms.begin())<<endl;
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		sol(n);
	}

	return 0;
}

