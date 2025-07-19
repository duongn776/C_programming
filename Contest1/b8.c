/*
Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương(lấy độ chính xác với 4 chữ số) của 2 số đó.
*/

#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%lld\n", 1ll * a * b);
	if (b == 0)
	{
		printf("INVALID\n");
	}else{
		printf("%.4lf\n", 1.0 * a / b);
	}
}