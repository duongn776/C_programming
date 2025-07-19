/*
Cho 4 số nguyên a, b, c, d. Hãy tìm số lớn nhất và nhỏ nhất trong 4 số này.
*/
#include<stdio.h>

int main()
{
	long long a,b,c,d;
	scanf("%lld%lld%lld%lld",  &a, &b, &c, &d);

	long long max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;

	long long min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;

	printf("%lld %lld", max, min);
}