/*
Một số được coi là đẹp nếu chữ số đầu gấp đôi chữ số cuối hoặc ngược lại, đồng thời các chữ số từ vị trí thứ 2 đến gần cuối thỏa mãn là một số thuận nghịch.

Ví dụ : các số 36788766; 12345654322 là các số đẹp. Viết chương trình kiểm tra số đẹp theo tiêu chí trên.
*/
#include<stdio.h>

int isPalindrome(long long n)
{
	long long original = n;
	long long rev = 0;
	while (n)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return original == rev;
}
int check(long long n)
{
	int lastDigit = n % 10;
	long long rev = 0;
	n /= 10;

	while (n >= 10)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}

	return ((n * 2 == lastDigit || lastDigit * 2 == n) && isPalindrome(rev));
}

int main()
{
	long long n; scanf("%lld", &n);
	if (check(n))
	{
		printf("YES");
	}else {
		printf("NO");
	}
}