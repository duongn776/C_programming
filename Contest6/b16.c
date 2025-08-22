#include<stdio.h>

int main()
{
	long long n;
	scanf("%lld", &n);

	int money[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int m = 10;

	long long cnt = 0;
	for (int i = 0; i < m; i++)
	{
		if (n >= money[i])
		{
			cnt += n / money[i];
			n %= money[i];
		}
	}
	printf("%lld", cnt);
}