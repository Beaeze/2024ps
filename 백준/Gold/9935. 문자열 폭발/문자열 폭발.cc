#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<limits.h>

using namespace std;

string str;
string boom;

string tmp;

int index=0;

int main(){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	cin>>str;
	cin>>boom;


	int str_len=str.length();
	int b_len=boom.length();
	char end = boom[b_len-1];

	for(int i=0;i<str_len;i++){
		tmp+=str[i];

		//폭발 문자열 찾기
		index=0;
		if(str[i]==end){
			int num=tmp.length()-1;
			while(index<b_len && tmp[num-index]==boom[b_len-1-index])index++;
		}

		//제거
		if(index==b_len){
			tmp.erase(tmp.end()-index,tmp.end());
			index=0;
		}
		
	}


	if(tmp=="")cout<<"FRULA\n";
	else cout<<tmp;

	return 0;

}