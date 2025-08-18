#include<stdio.h>
#include<math.h>

int isPrime(int n)
{
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}

int isPalindrome(int n)
{
	int rev = 0, tmp = n;
	while (n)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev == tmp;
}

int isSquare(int n)
{
	int r = (int)sqrt(n);
	return r * r == n;
}

int sumDigits(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return isPrime(sum);
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int cntPrime = 0, cntPalindrome = 0, cntSquare = 0, cntDigitPrime = 0;

    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) cntPrime++;
        if (isPalindrome(a[i])) cntPalindrome++;
        if (isSquare(a[i])) cntSquare++;
        if (sumDigits(a[i])) cntDigitPrime++;
    }

    printf("%d\n", cntPrime);
    printf("%d\n", cntPalindrome);
    printf("%d\n", cntSquare);
    printf("%d\n", cntDigitPrime);

    return 0;
}