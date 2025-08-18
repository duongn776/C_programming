#include<stdio.h>

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i <= n - k; i++)
	{
		int sum = 0;
		for (int j = 0; j < k; j++)
		{
			sum += a[j + i];
		}
		printf("%d ", sum);
	}
}