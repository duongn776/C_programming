#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int cnt = 1;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%d ", cnt++);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 1; i <= n; i++)
	{
		int digit = i;
		for (int j = 1; j <= n; ++j)
		{
			printf("%d ", digit++);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			printf("~");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 1; i <= n; i++)
	{
		int kc = n - 1;
		int ans = i;
		for (int j = 1; j <= i; j++)
		{
			printf("%d ", ans);
			ans += kc;
			kc--;
		}
		printf("\n");
	}
}