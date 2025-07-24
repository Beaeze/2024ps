#include <iostream>
#include <string>

using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int g[101][10]={0};
	int n,tmp=0;
	for(int i=0;i<10;i++){
		if(i==0){
			g[1][i]=0;
			continue;
		}
		g[1][i]=1;
	}
	cin>>n;
	for(int i=2;i<=n;i++){
		for(int j=0;j<10;j++){
			if(j==0){
				g[i][j]=g[i-1][j+1]%1000000000;
				continue;
			}
			if(j==9){
				g[i][j]=g[i-1][j-1]%1000000000;
				continue;
			}
			g[i][j]=(g[i-1][j+1]+g[i-1][j-1])%1000000000;
		}
	}
	for(int i=0;i<10;i++){
		tmp+=g[n][i];
		tmp%=1000000000;
	}
	cout<<tmp;
	return 0;
}

