#include<stdio.h>

int powerRe(int m, int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n % 2 == 0)
	{
		return powerRe(m * m, n / 2);
	}else {
		return m * powerRe(m * m, (n - 1) / 2);
	}
}

int main()
{
	int m , n;
	scanf("%d %d", &m, &n);

	printf("%d", powerRe(m, n));
}