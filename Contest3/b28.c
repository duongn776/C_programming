#include<stdio.h>
#include<math.h>

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
int isPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}
	return  n > 1;
}

int check(int n)
{
	int sum = 0; 
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return checkFibo(sum);
}
int main()
{
	long long n;
	scanf("%lld", &n);

	for (int i = 1; i < n; i++)
	{
		if (isPrime(i) && check(i))
		{
			printf("%d ", i);
		}
	}
}