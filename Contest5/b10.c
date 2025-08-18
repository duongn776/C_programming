#include<stdio.h>
#include<math.h>

int isPrime(int n)
{
	if (n < 2) return 0;

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}

	return 1;
}
int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		int sumLeft = 0, sumRight = 0;

		for (int j = 0; j < i; j++)
		{
			sumLeft += a[j];
		}

		for (int k = i + 1; k < n; k++)
		{
			sumRight += a[k];
		}

		if (isPrime(sumLeft) && isPrime(sumRight))
		{
			printf("%d ", i);
		}
	}
}