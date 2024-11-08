#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char a[30001];
	char k[30001];
	int i, len;

	gets(a);
	gets(k);

	len = strlen(a);

	for (i = 0 ; i < len ;i++)
	{
		int sum = 0;
		sum = k[i % strlen(k)] - 'a' + 1;


		if (a[i] == ' ')
			printf("%c", a[i]);
		else if ((a[i] - sum) >= 'a')
			printf("%c", a[i] - sum );
		else if ((a[i] - sum) < 'a')
			printf("%c", (a[i]-sum)+'z'-'a'+1);
		
	}
	
	return 0;
}





