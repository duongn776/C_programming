#include<stdio.h>

long long gt(long long n)
{
	long long res = 1;
	for (int i = 1; i <= n; i++)
	{
		res *= i;
	}
	return res;
}

int main()
{
	for (int i = 1; i <= 30; i++)
	{
		printf("%lld\n", gt(i));
	}
}