#include<stdio.h>

long long luyThua(int a, int b)
{
	long long res = 1;

	// xét từng bit của b
	while (b != 0)
	{
		if (b % 2 == 1)
		{
			// b là số lẻ: bit cuối cùng hiện tại của b là số lẻ
			res *= a;
		}
		a *= a;
		b /= 2;
	}
	return res;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);


	printf("%lld", luyThua(a, b));
}