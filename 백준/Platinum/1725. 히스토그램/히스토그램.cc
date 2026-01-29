#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<limits.h>

using namespace std;

vector<pair<int,int>>h; //높이,순서 저장

//왼쪽 오른쪽으로 갈 수 있는 최대 위치 저장배열
vector<int>Left;
vector<int>Right;

stack<pair<int,int>>st;
stack<pair<int,int>>st_empty;

vector<int>re; //직사각형 넓이 저장할 벡터



int main(){

	ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int n;
	int a;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		h.push_back(make_pair(a,i));
	}
	//왼쪽부터
	for(int i=0;i<n;i++){
		while(!st.empty()){
			int high=st.top().first;
			if(high<h[i].first)break; //스택탑이 현재보다 더 작으면 종료
			//스택탑이 더 크면 계속 pop
			st.pop();
		}
		if(st.empty())Left.push_back(-1);
		else Left.push_back(st.top().second); //top의 위치 넣기
		st.push(make_pair(h[i].first,h[i].second));

	}
	st.swap(st_empty);

	//오른쪽-역순으로 쌓임
	for(int i=n-1;i>=0;i--){
		while(!st.empty()){
			int high=st.top().first;
			if(high<h[i].first)break; //스택탑이 더 작으면 종료
			//스택탑이 더 크면 계속 pop
			st.pop();
		}
		if(st.empty())Right.push_back(n);
		else Right.push_back(st.top().second); //top의 위치 넣기
		st.push(make_pair(h[i].first,h[i].second));

	}
	reverse(Right.begin(),Right.end());

	for(int i=0;i<n;i++){
		int width=Right[i]-Left[i]-1;
		re.push_back(width*h[i].first);
	}

	sort(re.rbegin(),re.rend());
	cout<<re[0];

	return 0;

}
