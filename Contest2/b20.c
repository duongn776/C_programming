/*
Cho một số nguyên dương n, hãy biểu diễn n dưới dạng tổng của các số nguyên tố sao cho số lượng số hạng trong tổng là lớn nhất có thể
*/
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	if (n < 2)
	{
		printf("-1\n");
		return 0;
	}

	if (n % 2 == 0)
	{
		// n chẵn => dùng toàn số 2
		printf("%d\n", n / 2);
		for (int i = 0; i < n / 2; i++)
		{
			printf("2 ");
		}
	}else {
		// n lẻ => dùng (n - 3) / 2 số 2 và thêm 1 số 1
		printf("%d\n", n / 2);
		for (int i = 0; i < (n -3) / 2; i++)
		{
			printf("2 ");
		}
		printf("3");
	}
}