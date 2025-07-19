/*
Doremon muốn leo lên một cầu thang gồm n bước. Anh ta có thể leo 1 hoặc 2 bước mỗi lần di chuyển. Doremon muốn số lần di chuyển là bội số của một số nguyên m. Số lượng di chuyển tối thiểu làm cho anh ta leo lên đỉnh cầu thang thỏa mãn điều kiện của anh ta là gì?
*/
#include<stdio.h>

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	int min, max = n;

	if (n % 2 == 0)
	{
		min = n / 2;
	}else {
		min = n / 2 + 1;
	}

	//[min, max] nhỏ nhất chia hết cho m
	int res = (min + m - 1) / m * m;

	if (res <= max)
	{
		printf("%d", res);
	}else {
		printf("-1");
	}
}