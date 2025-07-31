/*
Tính tổng S(n) = 1^2 + 2^2 + 3^2 + 4^2 + ... + n^2
*/
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	long long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += 1ll* i * i;
	}

	printf("%lld", sum);
}