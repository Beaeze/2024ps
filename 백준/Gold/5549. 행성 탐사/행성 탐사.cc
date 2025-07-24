#include <iostream>
#include <string>

using namespace std;


int n,m,k;
int a,b,c,d; //(a,b)~(c,d)
string map;
//누적합 저장
class add{
	public:
	int j=0,o=0,i=0;
};
add A[1001][1001];

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);


	cin>>n>>m;
	cin>>k;
	for(int i=1;i<=n;i++){
		cin>>map;
		for(int j=1;j<=m;j++){
			if(map[j-1]=='J')A[i][j].j++;
			else if(map[j-1]=='O')A[i][j].o++;
			else if(map[j-1]=='I')A[i][j].i++;
			A[i][j].j+=A[i-1][j].j+A[i][j-1].j-A[i-1][j-1].j;
			A[i][j].o+=A[i-1][j].o+A[i][j-1].o-A[i-1][j-1].o;
			A[i][j].i+=A[i-1][j].i+A[i][j-1].i-A[i-1][j-1].i;
		}
	}


	for(int i=0;i<k;i++){
		add tmp;
		cin>>a>>b>>c>>d;
		tmp.j=A[c][d].j-A[a-1][d].j-A[c][b-1].j+A[a-1][b-1].j;
		tmp.o=A[c][d].o-A[a-1][d].o-A[c][b-1].o+A[a-1][b-1].o;
		tmp.i=A[c][d].i-A[a-1][d].i-A[c][b-1].i+A[a-1][b-1].i;

		cout<<tmp.j<<" "<<tmp.o<<" "<<tmp.i<<"\n";
	}
	return 0;
}

