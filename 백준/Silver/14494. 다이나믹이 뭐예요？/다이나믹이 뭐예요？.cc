#include <iostream>
#include <string>

using namespace std;


int n,m;
long long d[1001][1001]={0};

void sol(){

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i==1||j==1){
				d[i][j]=1;
				continue;
			}
			d[i][j]=(d[i][j-1]+d[i-1][j-1]+d[i-1][j])%1000000007;
		}
	}
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	cin>>n>>m;
	
	sol();
	cout<<d[n][m];

	return 0;
}

