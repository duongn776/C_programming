#include<stdio.h>

long long sumEven(long long n)
{
	if (n == 0) return 0;
	int last = n % 10;
	if (last % 2 == 0)
	{
		return last + sumEven(n / 10);
	}else {
		return sumEven(n / 10);
	}
}

long long sumOdd(long long n)
{
	if (n == 0) return 0;
	int last = n % 10;
	if (last % 2 == 0)
	{
		return sumOdd(n / 10);
	}else {
		return last + sumOdd(n / 10);
	}
}

int main()
{
	long long n;
	scanf("%lld", &n);

	printf("%lld\n", sumEven(n));
	printf("%lld\n", sumOdd(n));
}
