/*
Tính tổng hàm S(n) = 1^2 + 2^2 + 3^2 + 4^2 + .. + n^2 bằng đệ quy.
*/
#include<stdio.h>

long long S(int n)
{
	if (n <= 1) return n;

	return 1ll * n * n + S(n - 1); 
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%lld", S(n));
}