/*
Kiểm tra xem một số có số lượng ước số của nó là số lẻ.
*/
#include<stdio.h>
#include<math.h>

int main()
{
	long long n;
	scanf("%lld", &n);

	long long x = sqrt(n);
	if (x * x == n)
	{
		printf("YES");
	}else {
		printf("NO");
	}
}