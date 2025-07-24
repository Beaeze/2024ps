#include <iostream>
#include <string>

using namespace std;

int d[10001]={0};
int n,k,a;

void sol(int a){
	for(int i=a;i<=k;i++){
		if(i!=a&d[i-a]==0)continue;
		if(!d[i]){
			d[i]=d[i-a]+1;
			continue;
		}
		d[i]=min(d[i-a]+1,d[i]);
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	cin>>n>>k;

	for(int i=0;i<n;i++){
		cin>>a;
		sol(a);
	}

	if(d[k]==0)cout<<"-1";
	else cout<<d[k];

	return 0;
}

