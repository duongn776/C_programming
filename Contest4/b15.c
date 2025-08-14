#include<stdio.h>

int firstNumber(long long n)
{
	if (n < 10) return n;
	return firstNumber(n / 10);
}

int main()
{
	long long n;
	scanf("%lld", &n);

	printf("%d", firstNumber(n));
}