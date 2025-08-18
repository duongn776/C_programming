#include<stdio.h>

#define MOD 1000000007

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	long long sum = 0;
	long long product = 1;
	for (int i = 0; i < n; i++)
	{
		sum += a[i] % MOD;
		product *= a[i] % MOD;
		sum %= MOD;
		product %= MOD;
	}
	printf("%lld\n", sum);
	printf("%lld\n", product);
}