#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	long long product = 1;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n % i == 0)
			{
				product *= i;
			}
		}
	}

	printf("%lld", product);
}