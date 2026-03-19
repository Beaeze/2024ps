#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>

//소수의 연속합

using namespace std;

vector<long long>v(4000001,0);
vector<long long>sum; //소수 누적합


int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
    long long n;
    long long k=0;
    cin>>n;
    
    sum.push_back(0);
    for(int i=2;i<=n;i++){
        if(v[i])continue; //소수 아닌것
        else{
            sum.push_back(i+sum[sum.size()-1]); //소수인것 누적합
        }
        for(int j=2*i;j<=n;j+=i){
            v[j]=1; //소수가 아닌 수는 1로 표시
        }
    }
    int p1,p2;
    int size=sum.size();
    p1=1;
    p2=1;
    while(p1<=p2&&p1<=size&&p2<=size){
        long long ssum=0;
        if(p1==p2)ssum=sum[p1]-sum[p1-1];
        else ssum=sum[p2]-sum[p1-1];

        if(ssum==n)k++; //같으면 증가

        if(ssum<n||p1==p2)p2++;
        else p1++;

    }
    cout<<k;

    return 0;
	
}

