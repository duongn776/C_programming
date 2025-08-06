/*
Tìm ước chung lớn nhất và bội chung nhỏ nhất của 2 số nguyên không âm a và b
*/
#include<stdio.h>

long long gcd(long long a, long long b)
{
	while (b != 0)
	{
		long long r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long lcm(long long a, long long b)
{
	return a / gcd(a, b) * b;
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long g = gcd(a, b);
    long long l = lcm(a, b);

    printf("%lld %lld\n", g, l);

    return 0;
}