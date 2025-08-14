#include<stdio.h>

long long UCLN(long long a, long long b)
{
	if (b == 0) return a;
	return UCLN(b, a % b);
}

int main()
{
	long long a, b;
	scanf("%lld %lld", &a, &b);

	long long gcd = UCLN(a, b);
	long long bcnn = (a / gcd) * b;

	printf("%lld %lld", gcd, bcnn);
}