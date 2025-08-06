#include<stdio.h>

long long findFibo(long long n)
{
	if (n == 1) return 1;

	long long fn1 = 1, fn2 = 1, fn;
	for (int i = 2; i <= 92; i++)
	{
		fn = fn1 + fn2;
		if (fn >= n) break;
		fn2 = fn1;
		fn1 = fn;
	}
	return fn;
}
int main()
{
	long long n;
	scanf("%lld", &n);

	printf("%lld", findFibo(n));
}