#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<limits.h>
#include<tuple>

using namespace std;

char b[101][101]={0};
int v[101][101]={0}; //방문
int sp_v[101][101]={0};
int n;
int red=0,green=0,blue=0;
int special=0; //색약저장

queue<pair<int,int>>q;
queue<pair<int,int>>sp_q;
void bfs(int x,int y){
	int dx[]={1,0,-1,0}; //오,앞,왼,뒤
	int dy[]={0,-1,0,1};
    char now=b[x][y];
    q.push(make_pair(x,y));

	while(!q.empty()){
        int size = q.size();
        for(int j = 0; j < size; j++){
            int f=q.front().first;
            int s=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                if(f+dx[i]==0||s+dy[i]==0||f+dx[i]>n||s+dy[i]>n)continue; //n과m범위 내에서
                if(v[f+dx[i]][s+dy[i]])continue; //방문체크
                if(b[f+dx[i]][s+dy[i]]!=now)continue;
                q.push(make_pair(f+dx[i],s+dy[i]));
                v[f+dx[i]][s+dy[i]]=1;
            }
        }
		
	}

    if(now=='R')red++;
    else if(now=='G')green++;
    else if(now=='B')blue++;
}
void special_bfs(int x,int y){
	int dx[]={1,0,-1,0}; //오,앞,왼,뒤
	int dy[]={0,-1,0,1};

    if(b[x][y]=='B'){
        sp_v[x][y]=1;
        return;
    }
    sp_q.push(make_pair(x,y));

	while(!sp_q.empty()){
        int size = sp_q.size();
        for(int j = 0; j < size; j++){
            int f=sp_q.front().first;
            int s=sp_q.front().second;
            sp_q.pop();
            for(int i=0;i<4;i++){
                if(f+dx[i]==0||s+dy[i]==0||f+dx[i]>n||s+dy[i]>n)continue; //n과m범위 내에서
                if(sp_v[f+dx[i]][s+dy[i]])continue; //방문체크
                if(b[f+dx[i]][s+dy[i]]=='B'){
                    sp_v[f+dx[i]][s+dy[i]]=1;
                    continue;
                }
                sp_q.push(make_pair(f+dx[i],s+dy[i]));
                sp_v[f+dx[i]][s+dy[i]]=1;
            }
        }
		
	}
    special++;

}
int main(){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	cin>>n;
    //입력

    for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		    cin>>b[i][j];
	    }
	}

    for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		    if(!v[i][j]){
                v[i][j]=1;
                bfs(i,j);
            }
            if(!sp_v[i][j]){
                sp_v[i][j]=1;
                special_bfs(i,j);
            }
	    }
	}

    cout<<red+green+blue<<" "<<special+blue;


	return 0;

}