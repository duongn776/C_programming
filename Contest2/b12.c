/*
Nhập vào n nguyên dương không quá 10^6, tính và in tổng sau ra màn hình S =2+4+6+8+.....+2*n
*/

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	long long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += 2 * i;
	}

	printf("%lld\n", sum);
}