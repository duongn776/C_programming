/*
Nhập vào n nguyên dương không qua 10^6, tính và in tổng sau ra màn hình. S = 1+3+5+7+.....+2*n-1
*/

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	long long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += (2 * i - 1);
	}

	printf("%lld\n", sum);
}