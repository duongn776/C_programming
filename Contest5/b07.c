#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	int minDiff = 1e9;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int diff = abs(a[i] - a[j]);
			if (minDiff > diff)
			{
				minDiff = diff;
			}
		}
	}
	printf("%d", minDiff);
}