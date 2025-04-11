#include <stdio.h>
#include <stdlib.h>

int main() {

	int t;
	int s;
	scanf("%d %d",&t,&s);

	if(s==0&&(t>=12&&t<=16)){
		printf("320");
	}
	else if(s==1||(t<12||t>16))
		printf("280");

	return 0;
}