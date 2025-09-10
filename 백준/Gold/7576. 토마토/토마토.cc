#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<limits.h>

using namespace std;

int b[1001][1001]={0};
int v[1001][1001]={0}; //방문
int n,m;
int M=-1;
int to=0;

queue<pair<int,int>>q;

void bfs(){
	int dx[]={1,0,-1,0};
	int dy[]={0,-1,0,1};
	while(!q.empty()){
		int f=q.front().first;
		int s=q.front().second;
        M=max(M,v[f][s]);
		q.pop();
		for(int i=0;i<4;i++){
			if(b[f+dx[i]][s+dy[i]]==-1)continue; //토마토 없음
			if(f+dx[i]==0||s+dy[i]==0||f+dx[i]>n||s+dy[i]>m)continue; //n과m범위 내에서
			if(v[f+dx[i]][s+dy[i]])continue; //방문체크
			q.push(make_pair(f+dx[i],s+dy[i]));
			v[f+dx[i]][s+dy[i]]=v[f][s]+1;
            to--;
		}
	}
}
int main(){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	cin>>m>>n;
    //입력
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>b[i][j];
            if(b[i][j]==0)to++;
            if(b[i][j]==1){
                q.push(make_pair(i,j));
                v[i][j]=1;
            }
		}
	}
	if(to==0){
		cout<<0;
		return 0;
	}

    bfs();

    if(to>0)cout<<-1;
	else cout<<M-1;


	return 0;

}