/*
Bạn được cung cấp một số nguyên X. Bạn có thể biểu diễn X bằng cách tổng của các số trong các số 11,111,1111,11111,… ( Các số mà bản thân nó chỉ chứa các chữ số 1)?(Bạn có thể sử dụng bất kỳ số nào trong số chúng bất kỳ số lần nào). Ví dụ, 33 = 11 + 11 + 11 144 = 111 + 11 + 11 + 11
*/
#include<stdio.h>

int check(int n)
{
	for (int i = 0; i <= n / 111; i++)
	{
		int tmp = n - 111 * i;
		if (tmp % 11 == 0) return 1;
	}
	return 0;
}

int main()
{
	int n;
	scanf("%d", &n);

	if (check(n))
	{
		printf("YES");
	}else {
		printf("NO");
	}
}