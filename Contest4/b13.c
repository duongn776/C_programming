#include<stdio.h>

long long sumDigits(long long n)
{
	if (n < 10) return n;
	return (n % 10) + sumDigits(n / 10);
}

int main()
{
	long long n;
	scanf("%lld", &n);
	printf("%lld", sumDigits(n));
}