#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<limits.h>


using namespace std;

//1464-뒤집기3

deque<char>dq;


int main(){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	string s;
	string tmp=""; 
	bool ck=0;  //0:앞부터, 1:뒤부터
	cin>>s;

	
	int len=s.size();
	for(int i=0;i<len;i++){
		if(dq.empty()||dq.front()>=s[i])dq.push_front(s[i]);
		else dq.push_back(s[i]);
		
	}

	int f=dq.front();
	int e=dq.back();
	if(f>e){
		while(!dq.empty()){
			tmp+=dq.back();
			dq.pop_back();
		}
	}
	else{
		while(!dq.empty()){
			tmp+=dq.front();
			dq.pop_front();
		}
	}



	cout<<tmp;


	return 0;
}

