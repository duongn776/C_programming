#include<stdio.h>
#include<math.h>

#define MAX 1000000
int prime[1000001];

void sieve()
{
	for (int i = 0; i <= MAX; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;

	for (int i = 2; i <=  sqrt(MAX); i++)
	{
		if (prime[i]) 
		{
			for (int j = i * i; j <= MAX; j += i) prime[j] = 0;
		}
	}
}

int main()
{
	sieve();

	long long n;
	scanf("%lld", &n);

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (prime[i])
		{
			printf("%lld ", 1ll * i * i);
		}
	}
}