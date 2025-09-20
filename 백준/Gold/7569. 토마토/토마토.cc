#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<limits.h>
#include<tuple>

using namespace std;

int b[101][101][101]={0};
int v[101][101][101]={0}; //방문
int n,m,h;
int day=-1;
int to=0;

queue<pair<pair<int,int>,int>>q;

void bfs(){
	int dx[]={1,0,-1,0,0,0}; //오,앞,왼,뒤,위,아래
	int dy[]={0,-1,0,1,0,0};
    int dz[]={0,0,0,0,1,-1};
	while(!q.empty()){
        int size = q.size();
        day++;
        for(int j = 0; j < size; j++){
            int f=q.front().first.first;
            int s=q.front().first.second;
            int t=q.front().second;
            q.pop();
            for(int i=0;i<6;i++){
                if(f+dx[i]==0||s+dy[i]==0||t+dz[i]==0||f+dx[i]>n||s+dy[i]>m||t+dz[i]>h)continue; //n과m범위 내에서
                if(b[f+dx[i]][s+dy[i]][t+dz[i]]==-1)continue; //토마토 없음
                if(v[f+dx[i]][s+dy[i]][t+dz[i]])continue; //방문체크
                q.push(make_pair(make_pair(f+dx[i],s+dy[i]),t+dz[i]));
                v[f+dx[i]][s+dy[i]][t+dz[i]]=1;
                to--;
            }
        }
		
	}
}
int main(){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	cin>>m>>n>>h;
    //입력
    for(int k=1;k<=h;k++){
	    for(int i=1;i<=n;i++){
    		for(int j=1;j<=m;j++){
			    cin>>b[i][j][k];
                if(b[i][j][k]==0)to++;
                if(b[i][j][k]==1){
                    q.push(make_pair(make_pair(i,j),k));
                    v[i][j][k]=1;
                }
		    }
	    }
    }
	if(to==0){
		cout<<0;
		return 0;
	}

    bfs();

    if(to>0)cout<<-1;
	else cout<<day;


	return 0;

}