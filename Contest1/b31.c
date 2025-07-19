/*
Bizon the champion
*/
#include<stdio.h>

int main()
{
	int a1, a2, a3, b1, b2, b3, n;
	scanf("%d%d%d%d%d%d%d", &a1, &a2, &a3, &b1, &b2, &b3, &n);

	int cup = a1 + a2 + a3;
	int hc = b1 + b2 + b3;

	int ke1, ke2;

	ke1 = (cup % 5 == 0) ? cup / 5 : cup / 5 + 1;
	ke2 = (hc % 10 == 0) ? hc / 10 : hc / 10 + 1;

	if (ke1 + ke2 <= n)
	{
		printf("YES");
	}else {
		printf("NO");
	}
}