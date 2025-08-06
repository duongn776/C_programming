/*
Cho số tự nhiên N. Nhiệm vụ của bạn là hãy kiểm tra N có phải là số Smith hay không. Một số được gọi là số Smith nếu N không phải là số nguyên tố và có tổng các chữ số của N bằng tổng các chữ số của các thừa số nguyên tố trong phân tích của N.
*/
#include<stdio.h>
#include<math.h>

int Tong(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int isSmith(int n)
{
	int temp = n;
	int sum1 = Tong(n);
	int sum2 = 0;

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			int k = Tong(i);
			while (n % i == 0)
			{
				sum2 += k;
				n /= i;
			}
		}
	}

	if (temp == n) return 0;
	if (n > 1) sum2 += Tong(n);
	return sum1 == sum2;
}

int main()
{
	int n;
	scanf("%d", &n);

	if (isSmith(n))
	{
		printf("YES");
	}else {
		printf("NO");
	}
}