#include<stdio.h>

int maxDigit(long long n)
{
	if (n < 10) return n;

	int last = n % 10;
	int max = maxDigit(n / 10);

	return (last > max) ? last : max;
}

int minDigit(long long n)
{
	if (n < 10) return n;

	int last = n % 10;
	int min = minDigit(n / 10);

	return (last < min) ? last : min;
}

int main()
{
	long long n;
	scanf("%lld", &n);

	printf("%d %d", maxDigit(n), minDigit(n));
}