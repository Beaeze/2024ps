#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>

//덱로 푼 풀이

using namespace std;

vector<long long>arr(100000,0);
pair<long long,pair<long long,long long>>p;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
    long long n;
    long long p1,p2;
    long long ans=4000000000;
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.begin()+n); //정렬


    for(int i=0;i<n;i++){
        long long tmp;
        p1=i+1;
        p2=n-1;
        while(p1<p2){
            tmp=arr[p1]+arr[p2]+arr[i];
            if(abs(tmp)<abs(ans)){
                ans=tmp;
                p.first=arr[p1];
                p.second.first=arr[p2];
                p.second.second=arr[i];
            }
            if(tmp<0)p1++;
            else p2--;
        }

    }
    

    cout<<p.second.second<<" "<<p.first<<" "<<p.second.first;

    return 0;
	
}

