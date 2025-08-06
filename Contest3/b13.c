/*
Một số được gọi là lộc phát nếu chỉ có các chữ số 0,6,8. Nhập vào một số nguyên hãy kiểm tra xem đó có phải số lộc phát hay không.
*/
#include<stdio.h>
#include<math.h>

int check(long long n)
{
	while (n)
	{
		int digit = n % 10;
		if (digit != 0 && digit != 6 && digit != 8) return 0;
		n /= 10;
	}
	return 1;
}

int main()
{
	long long n; scanf("%lld", &n);

	printf("%d", check(n));
}