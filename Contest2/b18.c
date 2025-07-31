/*
Nhập vào n nguyên. Đếm số lượng chữ số của n là số nguyên tố.
*/

#include<stdio.h>

int main()
{
	long long n;
	scanf("%lld", &n);

	int cnt = 0;

	while (n != 0)
	{
		int digit = n % 10;
		if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
		{
			cnt++;
		}
		n /= 10;
	}

	printf("%d", cnt);
}