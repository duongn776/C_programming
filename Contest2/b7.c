/*
Đếm số lượng ước và liệt kê các ước theo thứ tự tăng dần của số nguyên dương N

Gợi ý : Duyệt vòng lặp từ 1 tới N lượt thứ nhất để đếm ước, lượt thứ 2 để liệt kê ước
*/
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cnt++;
		}
	}
	printf("%d\n", cnt);

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
		}
	}
}