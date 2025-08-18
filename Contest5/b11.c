#include<stdio.h>

long long F[93];

void Fibonacci()
{
	F[0] = 0;
	F[1] = 1;
	for (int i = 2; i < 93; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
	}
}

int isFibonacci(long long n)
{
	for (int i = 0; i < 93; i++)
	{
		if (F[i] == n) return 1;
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d", &n);

	long long a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
	}

	Fibonacci();

	int isCheck = 0;
	for (int i = 0; i < n; i++)
	{
		if (isFibonacci(a[i]))
		{
			printf("%lld ", a[i]);
			isCheck = 1;
		}
	}

	if (!isCheck) printf("NONE");
}