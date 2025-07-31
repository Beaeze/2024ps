#include <iostream>
#include <string>

using namespace std;

long long d[100][2]={0};

void sol(int n){
	d[1][0]=0;
	d[1][1]=1;
	
	for(int i=2;i<=n;i++){
		d[i][0]+=d[i-1][1];
		d[i][0]+=d[i-1][0];
		d[i][1]+=d[i-1][0];
	}
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	cin>>n;

	sol(n);

	cout<<d[n][0]+d[n][1];
	return 0;
}

