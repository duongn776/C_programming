#include<stdio.h>
#include<math.h>

int soHH(int n)
{
	int sum = 1;
	for (int i = 2; i <= sqrt(n); i++)
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
	return (sum == n);
}

int main()
{
	int n;
	scanf("%d", &n);

	if (soHH(n))
	{
		printf("YES");
	}else {
		printf("NO");
	}
}