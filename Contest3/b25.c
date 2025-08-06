#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	long long fn1 = 1, fn2 = 1;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1 || i == 2)
		{
			printf("1\n");
		}else {
			long long fn = fn1 + fn2;
			printf("%lld\n", fn);
			fn2 = fn1;
			fn1 = fn;
		}
	}
}