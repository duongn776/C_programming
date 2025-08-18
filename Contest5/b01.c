#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	int cntEven = 0, cntOdd = 0, sumEven = 0, sumOdd = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cntEven++;
			sumEven += a[i];
		}else {
			cntOdd++;
			sumOdd += a[i];
		}
	}

	printf("%d\n", cntEven);
	printf("%d\n", cntOdd);
	printf("%d\n", sumEven);
	printf("%d\n", sumOdd);
}