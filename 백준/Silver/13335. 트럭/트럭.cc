#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
#include<limits.h>

using namespace std;

//13335-트럭

int car[1000]; //차무게 저장
queue<int>bridge;  //다리


int main(){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int n,w,l; //차량수,다리길이,최대무게
	int now_w=0; //현재 다리에 올라간 무게
	int time=0;

	cin>>n>>w>>l;
	
	for(int i=0;i<n;i++)cin>>car[i];

	for(int i=0;i<w;i++)bridge.push(0);

	//다리길이만큼 큐사이즈 유지
	int nn=0; //현재 다리 건너간 차 수
	while(nn < n|| now_w>0){ //차가 다 지났고, 현재 다리위에 차가 다 없는 경우

		int f=bridge.front();
		now_w-=f;
		bridge.pop();
		time++;

		if(nn < n&&now_w+car[nn]<=l){
			bridge.push(car[nn]);
			now_w+=car[nn++];
		}
		else{
			bridge.push(0);
		}

	}

	cout<<time;

	return 0;
}