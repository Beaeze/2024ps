#include <iostream>
#include <string>

using namespace std;

int d[1000001]={0};

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	cin>>n;
	
	for(int i=n;i>0;i--){
		if(i==n){
			if(i%3==0)d[i/3]=1;
			if(i%2==0)d[i/2]=1;
			d[i-1]=1;
			continue;			
		}
		if(d[i/3]!=0&&i%3==0)d[i/3]=min(d[i/3],d[i]+1);
		else if(d[i/3]==0&&i%3==0)d[i/3]=d[i]+1;
		if(d[i/2]!=0&&i%2==0)d[i/2]=min(d[i/2],d[i]+1);
		else if(d[i/2]==0&&i%2==0)d[i/2]=d[i]+1;
		if(d[i-1]!=0)d[i-1]=min(d[i-1],d[i]+1);
		else if(d[i-1]==0)d[i-1]=d[i]+1;
	}
	cout<<d[1];
	return 0;
}

