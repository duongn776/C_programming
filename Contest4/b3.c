/*
Tính tổng hàm S(n) = 1^3 + 2^3 + 3^3 + 4^3 + .. + n^3 bằng đệ quy
*/
#include<stdio.h>

long long S(int n)
{
	if (n <= 1) return n;

	return 1ll * n * n * n + S(n - 1); 
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%lld", S(n));
}