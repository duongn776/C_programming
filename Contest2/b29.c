#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	long long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		int x; scanf("%d", &x);
		if (x % 2 == 0)
		{
			sum += x;
		}
	}
	printf("%lld", sum);
}