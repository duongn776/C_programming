/*
Nhập vào n, đếm số lượng chữ số của n và in ra kết quả.
*/

#include<stdio.h>

int main()
{
	long long n;
	scanf("%lld", &n);

	int cnt = 0;
	
	if (n == 0)
	{
		cnt = 1;
	}else {
		while (n != 0)
		{
			cnt++;
			n /= 10;
		}
	}

	printf("%d\n", cnt);
}