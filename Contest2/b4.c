/*
Tính tổng : S(n) =1+1/2+1/3+1/4+….+1/n
Lưu ý : Lấy 1.0 / i khi tính toán thay vì 1 / i
*/
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	double sum = 0.0;
	for (int i = 1; i <= n; i++)
	{
		sum += 1.0 / i;
	}

	printf("%.3lf\n", sum);
}