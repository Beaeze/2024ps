#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int n, m;
	int j, r = 0, l = 0;
	int ap[20];
	
	scanf("%d %d", &n, &m);
	scanf("%d", &j);
	for (int i = 0; i < j; i++)
		scanf("%d", &ap[i]);

	for (int i = 0; i < j; i++)
	{
		if ((ap[i] >= (r - l)+1) && (ap[i] <= (r - l) + m))
			continue;
		else if (ap[i] < (r - l)+1)
		{
			l++;
			if ((ap[i] >= (r - l)+1) && (ap[i] <= (r - l) + m))
				continue;
			else
			{
				i--;
				continue;
			}
		}
		else if (ap[i] > (r - l) + m)
		{
			r++;
			if ((ap[i] >= (r - l)+1) && (ap[i] <= (r - l) + m))
				continue;
			else
			{
				i--;
				continue;
			}
		}

	}
	printf("%d", r + l);
	return 0;

}




