#include<stdio.h>

void printLeftToRight(long long n)
{
	if (n >= 10)
	{
		printLeftToRight(n / 10);
	}
	printf("%lld ", n % 10);
}

void printRightToLeft(long long n)
{
	printf("%lld ", n % 10);
	if (n >= 10)
	{
		printRightToLeft(n / 10);
	}
}

int main() {
    long long N;
    scanf("%lld", &N);

    printLeftToRight(N);
    printf("\n");
    printRightToLeft(N);

    return 0;
}