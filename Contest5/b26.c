#include<stdio.h>

int mark[1000001] = {0};

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		mark[a[i]] = 1;
	}

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (mark[a[i]] == 1) 
		{
			cnt++;
			mark[a[i]] = 0;
		}
	}

	printf("%d", cnt);
}