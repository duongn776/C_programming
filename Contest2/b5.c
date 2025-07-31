/*
Tính tổng : S(n) = 1/2 + 1/4 + 1/6 + 1/8 +…….+ 1/(2n)
*/
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	double sum = 0.0;
	for (int i = 1; i <= n; i++)
	{
		sum += 1.0 / (2 * i);
	}

	printf("%.5lf\n", sum);
}