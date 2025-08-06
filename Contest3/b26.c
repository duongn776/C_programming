#include<stdio.h>

int checkFibo(long long n)
{
	if (n == 0 || n == 1) return 1;

	long long fn1 = 1, fn2 = 1;
	for (int i = 2; i <= 92; i++)
	{
		long long fn = fn1 + fn2;
		if (fn == n) return 1;
		fn2 = fn1;
		fn1 = fn;
	}
	return 0;
}
int main()
{
	long long n;
	scanf("%lld", &n);

	if (checkFibo(n))
	{
		printf("YES");
	}else {
		printf("NO");
	}
}