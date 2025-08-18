#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	int minVal = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < minVal)
		{
			minVal = a[i];
		}
	}

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == minVal)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
}