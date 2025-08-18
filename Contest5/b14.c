#include<stdio.h>

int gcd(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
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

	int res = a[0];
	for (int i = 1; i < n; i++)
	{
		res = gcd(res, a[i]);
		if (res == 1) break;
	}
	printf("%d", res);
}