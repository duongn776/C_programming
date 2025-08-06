/*
Một số được coi là đẹp nếu nó là số thuận nghịch và có ít nhất 3 ước số nguyên tố khác nhau. Hãy in ra các số đẹp như vậy trong một đoạn giữa hai số nguyên a, b cho trước
*/
#include<stdio.h>
#include<math.h>

int isPalindrome(int n)
{
	int original = n;
	int reversed = 0;

	while (n)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}

	return original == reversed;
}

int hasAtLeast3PrimeFactors(int n)
{
	int cnt = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			cnt++;
			while (n % i == 0)
			{
				n /= i;
			}
		}
	}

	if (n != 1) cnt++;

	return (cnt >= 3);
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int found = 0;
	for (int i = a; i <= b; i++)
	{
		if (isPalindrome(i) && hasAtLeast3PrimeFactors(i))
		{
			printf("%d ", i);
            found = 1;
		}
	}
	if (!found)
		printf("-1");

	return 0;
}