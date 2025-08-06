/*
Đếm số lượng các số chính phương trong đoạn từ a tới b
*/
#include<stdio.h>
#include<math.h>

int main()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);

	int cnt = 0;
	for (int i = ceil(sqrt(a)); i <= sqrt(b); i++)
	{
		cnt++;
	}
	printf("%d",cnt);
}