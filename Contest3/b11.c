#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}

int isSumPrime(int n)
{
	int sum = 0;
	while (n)
	{
		int digit = n % 10;

		// Kiểm tra chữ số có phải là số nguyên tố
		if (digit != 2 && digit != 3 && digit != 5 && digit != 7)
			return 0;

		sum += digit;
		n /= 10;
	}
	return isPrime(sum);
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	int cnt = 0;
	for (int i = a; i <= b; i++)
	{
		if (isSumPrime(i) && isPrime(i))
			cnt++;
	}

	printf("%d", cnt);
	return 0;
}
