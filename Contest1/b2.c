/*
Cho ba số nguyên a , b và c, hãy tính S = a(b+c)+b(a+c).
*/
#include<stdio.h>

int main()
{
	long long a,b,c;
	scanf("%lld%lld%lld", &a, &b, &c);

	long long res = a * (b + c) + b * (a + c);

	printf("%lld", res);
}