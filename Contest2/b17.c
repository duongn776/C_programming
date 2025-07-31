/*
Nhập vào n, tính tổng các chữ số của n, và in ra kết quả
*/

#include<stdio.h>

int main()
{
	long long n;
	scanf("%lld", &n);

	long long sum = 0;

	while (n != 0)
	{
		int digit = n % 10;
		sum += digit;
		n /= 10;
	}
	printf("%lld", sum);
}