#include<stdio.h>

int main()
{
	long long n;
	scanf("%lld", &n);

	while (n >= 10)
	{
		int sum = 0;
		while (n)
		{
			sum += n % 10;
			n /= 10;
		}
		n = sum;
	}
	printf("%lld", n);
}