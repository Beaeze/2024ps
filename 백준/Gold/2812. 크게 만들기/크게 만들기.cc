#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<limits.h>

using namespace std;

string str;
string tmp="";

int index=0;

int main(){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int n,k;
   char c;

   cin>>n>>k;

   cin>>str;

   int size=n-k; //결과 길이
   int len=str.length();
   int i=0; //tmp현재 위치
	while(i<len){
		while(!tmp.empty() && k>0 && tmp.back()<str[i]){
			tmp.pop_back();
			k--;
		}
		tmp+=str[i++];
	}

	while(k>0){
		tmp.pop_back();
		k--;
	}
	cout<<tmp;

   return 0;

}
