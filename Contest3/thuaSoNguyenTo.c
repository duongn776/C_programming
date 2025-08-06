#include<stdio.h>
#include<math.h>

void ptich(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				printf("%d ", i);
				n /= i;
			}
		}
	}
	// neu ch phan tich thua so nguyen to xong
	if (n != 1)
	{
		printf("%d", n);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	ptich(n);
}