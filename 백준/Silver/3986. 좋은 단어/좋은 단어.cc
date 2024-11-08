#include <stdio.h>
#include<string.h>
#include <stack>
using namespace std;

int main()
{
	
	int n;
	int sum = 0;
	char a[100001] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		stack<char>s;
		scanf("%s", a);
		int len = strlen(a);
		for (int j = 0; j < len; j++)
		{
			if (s.empty() == 1)
				s.push(a[j]);
			else if (s.top() == a[j])
				s.pop();
			else if(s.top() != a[j])
				s.push(a[j]);

		}
		if (s.empty() == 1)
			sum++;
	}

	printf("%d", sum);
	return 0;
}
