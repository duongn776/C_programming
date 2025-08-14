#include<stdio.h>

double e(int x, int n)
{
	static double p = 1, f = 1;

	if (n == 0) return 1;

	double res = e(x, n - 1);
	p = p * x;
	f = f * n;

	return res + p / f;
}

int main()
{
	printf("%lf \n", e(1, 10));
}