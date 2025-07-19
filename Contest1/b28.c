/*
Cho cấp số cộng có n phần tử, cho biết phần tử đầu tiên trong dãy là u1 và công sai d. Hãy tính tổng các phần tử của cấp số cộng này.
*/
#include<stdio.h>

int main()
{
	int n, u1, d;
	scanf("%d%d%d", &n, &u1, &d);

	long long un = u1 + 1ll * (n - 1) * d;
	long long s = n * (u1 + un) / 2;
	printf("%lld", s);

}