#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>

//10129-작은 새
//새의 피로감(현재보다 높은 나무로 갈때)을 최소화

using namespace std;

vector<long long>tree; //나무 높이
vector<long long>dp(1000001,0); //현재 나무까지 왔을때의 피로도
deque<pair<long long, int>>dq; //피로도(최소), 인덱스

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

    
    int n,q;
    int k;

    cin>>n; //나무 수

    //인덱스 0을 사용 안하려고
    tree.push_back(0);

    //나무 높이 입력
    for(int i=1;i<=n;i++){
        cin>>k;
        tree.push_back(k);
    }
    cin>>q; //새의 수

    for(int j=0;j<q;j++){

        dq.clear();//덱 초기화
        dp[1]=0; //dp초기화를 위해- 새는 1번 나무부터 출발 즉, 0

        //인덱스1의 값을 넣음
        dq.push_back({0,1});
    

        cin>>k; //새가 날아갈 수 있는 최대 거리
        for(int i=2;i<=n;i++){ //2번나무부터

            //현재와 k만큼 먼거 다 빼기 앞에서
            while(!dq.empty()&&dq.front().second<i-k)dq.pop_front();

            //현재 나무 오르는 경우
            if(tree[i]>=tree[dq.front().second]){ //현재 나무가 덱에 있는 나무보다 높으면
                dp[i]=dq.front().first+1; //현재 피로도 + 1
            }
            else{ //현재 나무가 덱에 있는 나무보다 낮으면
                dp[i]=dq.front().first; //현재 피로도 + 0
            }
            
            //현재 dp값
            while(!dq.empty()){
                //현재 피로도 값보다 큰거 다 빼기 뒤에서
                if(dq.back().first>dp[i]||(dq.back().first==dp[i]&&tree[dq.back().second]<tree[i]))
                dq.pop_back();
                else break;
            }
            dq.push_back({dp[i],i}); //전꺼의 피로도, 인덱스


        }
        cout<<dp[n]<<"\n"; //결과
    }

    return 0;
	
}

