#include<stdio.h>

int allEvenDigits(long long n)
{
	if (n == 0) return 1;
	int last = n % 10;
	if (last % 2 != 0) return 0;

	return allEvenDigits(n / 10);
}

int main() {
    long long N;
    scanf("%lld", &N);

    if (allEvenDigits(N))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}