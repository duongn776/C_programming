/*
Một số được coi là số đẹp nếu nó là số thuận nghịch, có chứa ít nhất một chữ số 6, và tổng các chữ số của nó có chữ số cuối cùng là 8.

Hãy liệt kê các số đẹp trong đoạn giữa 2 số nguyên a, b cho trước
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

int hasDigit6(int n)
{
	while (n)
	{
		if (n % 10 == 6) return 1;
		n /= 10;
	}
	return 0;
}

int digitSumEndsWith8(int n)
{
	int sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}

	return (sum % 10 == 8);
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	int found = 0;
	for (int i = a; i <= b; i++)
	{
		if (digitSumEndsWith8(i) && isPalindrome(i) && hasDigit6(i))
		{
			printf("%d ", i);
			found = 1;
		}
	}

	if (!found) printf("-1");
}
