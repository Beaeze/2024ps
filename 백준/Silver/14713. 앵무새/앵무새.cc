#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<limits.h>

using namespace std;

//14713-앵무새

string s[101]; //앵무새가 말한 문장
string ans; //받아적은 문장

queue<string>q[101];
queue<string>re;


int main(){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int n; //앵무새수
	cin>>n;

	cin.ignore();
	for(int i=1;i<=n;i++)getline(cin,s[i]);
	getline(cin,ans);



	//앵무새 문장 큐에 넣기
	for(int i=1;i<=n;i++){
		string word;
		int j=0;
		while(s[i][j]!='\0'){
			if(s[i][j]==' '){
				q[i].push(word);
				word="";
			}
			else word+=s[i][j];
			j++;
		}
		if(!word.empty())q[i].push(word);
	}

	int now=0;
	string word;
	while(ans[now]!='\0'){
		if(ans[now]==' '){
			re.push(word);
			word="";
		}
		else word+=ans[now];
		now++;
	}
	if(!word.empty())re.push(word);


	while(re.size()!=0){
		string f=re.front();
		int check=1;
		for(int i=1;i<=n;i++){
			if(!q[i].empty()&&f==q[i].front()){
				q[i].pop();
				re.pop();
				check=0;
				break;
			}
			
		}
		if(check){
			cout<<"Impossible";
			return 0;
		}
	}

	for(int i=1;i<=n;i++){
		if(q[i].size()!=0){
			cout<<"Impossible";
			return 0;
		}
	}


	cout<<"Possible";
	return 0;
}