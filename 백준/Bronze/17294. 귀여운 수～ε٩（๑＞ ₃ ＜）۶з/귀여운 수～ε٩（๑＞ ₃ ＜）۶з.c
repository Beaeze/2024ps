#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char a[100000];
	char sum = 0;
	int cnt = 0;
	char b;
	scanf("%s", a);
	for (int i = 1; i < strlen(a); i++)
	{
		sum = a[i] - a[i - 1];
		if (i == 1)
			b = sum;
		else if (b == sum)
		{
			b = sum;
			continue;
		}
		else if (b != sum)
		{
			printf("흥칫뿡!! <(￣ ﹌ ￣)>");
			return 0;
		}
		
	}
	printf("◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!");
	
	return 0;
}