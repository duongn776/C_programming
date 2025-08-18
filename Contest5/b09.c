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

	for (int i = 0; i < n; i++)
	{
		int isFind = 0;
		for (int j = 0; j < i; j++)
		{
			if (a[j] == a[i])
			{
				isFind = 1;
				break;
			}
		}
		if (!isFind)
		{
			int cnt = 1;
			for (int k = i + 1; k < n; k++)
			{
				if (a[i] == a[k])
				{
					cnt++;
				}
			}
			printf("%d %d\n", a[i], cnt);
		}
	}
}