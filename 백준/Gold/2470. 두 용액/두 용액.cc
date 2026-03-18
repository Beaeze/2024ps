#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>

//덱로 푼 풀이

using namespace std;

vector<int>arr(100000,0);
pair<int,int>p;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
    int n;
    int p1,p2;
    int ans=2000000000;
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.begin()+n); //정렬

    p1=0;
    p2=n-1;
    while(p1<p2){
        int tmp=arr[p1]+arr[p2];
        if(abs(tmp)<abs(ans)){
            ans=tmp;
            p.first=arr[p1];
            p.second=arr[p2];
        }
        if(tmp<0)p1++;
        else p2--;
    }

    cout<<p.first<<" "<<p.second;

    return 0;
	
}

