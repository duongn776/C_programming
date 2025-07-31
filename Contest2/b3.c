/*
Nhập vào giá trị của n không quá 10^6, tính tổng các số nguyên dương không vượt quá n chia hết cho 3.
*/
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	long long sum = 0;
	for (int i = 0; i <= n; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
	}

	printf("%lld", sum);
}