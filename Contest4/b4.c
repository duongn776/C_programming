/*
Tính tổng hàm S(n) = -1 + 2 -3 + 4 - 5 + 6 + ... + (-1)^n * n bằng đệ quy
*/
#include<stdio.h>

int S(int n)
{
	if (n == 1) return -1;

	if (n % 2 == 0)
	{
		return n + S(n - 1);
	}else {
		return -n + S(n - 1);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", S(n));
}