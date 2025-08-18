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

	int cntPrime = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (isPrime(a[i]))
		{
			cntPrime++;
			sum += a[i];
		}
	}

	double avg = (double)sum / cntPrime;
	printf("%.3lf", avg);
}