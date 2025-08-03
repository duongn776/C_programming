#include<stdio.h>

long long factorial(long long n)
{
	long long res = 1;
	for (int i = 2; i <= n; i++)
	{
		res *= i;
	}
	return res;
}

int main()
{
	long long a,b;
	scanf("%lld%lld", &a, &b);

	long long m = a < b ? a : b;

	long long res = factorial(m);

	printf("%lld", res);
}