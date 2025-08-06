/*
Hãy phân tích một số nguyên dương N thành thừa số nguyên tố
*/
#include<stdio.h>
#include<math.h>

void ptich(long long n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			int cnt = 0;
			while (n % i == 0)
			{
				cnt++;
				n /= i;
			}
			printf("%d^%d", i, cnt);
			if (n != 1)
			{
				printf(" * ");
			}
		}
	}
	if (n > 1)
	{
		printf("%lld^1", n);
	}
}

int main()
{
	long long n;
	scanf("%lld", &n);
	ptich(n);
}