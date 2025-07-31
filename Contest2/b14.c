/*
Nhập vào n nguyên dương không quá 1000 và tính tổng sau, kết quả in ra màn hình. S =1^3+2^3+3^3+4^3+……+n^3.

*/
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	long long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += (1ll * i * i * i);
	}
	printf("%lld", sum);
}