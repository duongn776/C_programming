#include<stdio.h>

int countDigits(long long n)
{
	if (n < 10) return 1;
	return 1 + countDigits(n / 10);
}

int main()
{
	long long n;
	scanf("%lld", &n);
	printf("%d", countDigits(n));
}