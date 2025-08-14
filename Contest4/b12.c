#include<stdio.h>

void printHex(long long n)
{
	if (n < 16)
	{
		if (n <= 9) printf("%lld", n);
		else printf("%c", (char)n + 55);
	}else {
		printHex(n / 16);
		long long r = n % 16;
		if (r <= 9) printf("%lld", r);
		else printf("%c", (char)r + 55);
	}
}

int main()
{
	long long n;
	scanf("%lld", &n);
	printHex(n);
}