#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<limits.h>
#include<tuple>

using namespace std;

int n,m;
vector<int>re; //지금거쳐가고 있는 곳
//bool v[9]; //방문확인
int arr[9];

void back(int deep){
    if(deep==m){
        for(auto i: re)cout<<i<<' ';
        cout<<"\n";
        return;
    }
    for(int i=1;i<=n;i++){
        //if(v[i])continue;
        //v[i]=true;
        re.push_back(arr[i]);
        back(deep+1);//이거 deep++하면 안됨
        //경우의 수를 출력한 후 함수를 빠져나온 후
        //v[i]=false;
        re.pop_back();
    }
}

int main(){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    cin>>n>>m;

    for(int i=1;i<=n;i++)cin>>arr[i];

    sort(arr+1,arr+n+1);

    back(0);

	return 0;

}