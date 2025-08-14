/*
Tính tổng hàm S(n) = 1 + 2 + 3 + 4 + .. + n bằng đệ quy.
*/
#include<stdio.h>

int S(int n)
{
	if (n == 0) return 0;
	return n + S(n - 1);
}

int main()
{
	int n;
	scanf("%d", &n);

	int res = S(n);

	printf("%d\n", res);
}