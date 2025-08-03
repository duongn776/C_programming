#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	long long sum = 0;
	long long fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
		sum += fact;
	}

	printf("%lld", sum);
}