#include <stdio.h>
int vi[151]={0};
int arr[151]={0};

int main() {

	int n,k,a;
	int s=0;
	int cnt=0;
	int ch=0;
	scanf("%d %d",&n,&k);

	for(int i=0;i<n;i++){
		scanf("%d",&a);
		arr[i]=a;
	}

	while(vi[s]==0){
		if(s==k){
			ch=1;
			printf("%d",cnt);
			break;
		}
		vi[s]=1;
		cnt++;
		s=arr[s];
	}
	if(ch==0)
		printf("-1");

	return 0;
}

