#include<stdio.h>
#include<math.h>

int tong(int n)
{
	int sum = 0;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			sum += i;
			if (i != n / i)
			{
				sum += n / i;
			}
		}
	}
	return sum;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", tong(n));
}