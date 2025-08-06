/*
Kiểm tra một số nguyên có phải là số chính phương hay không?
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