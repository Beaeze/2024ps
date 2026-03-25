#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>

//1253-좋다

using namespace std;

vector<int>v; 



int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
    int n;
    int a;
    int cnt=0; 

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end()); //정렬

    for(int i=0;i<n;i++){

        int left=0;
        int right=v.size()-1;

        while(left<right){
            int sum=v[left]+v[right];
            if(i==left){
                left++; 
                continue;
            }
            else if(i==right){
                right--;
                continue;
            }
            if(sum==v[i]){
                cnt++;
                break;
            }
            else if(sum<v[i])left++;
            else right--;
        }
    }

    cout<<cnt;
    
    return 0;

}

