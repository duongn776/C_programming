/*
Hãy nhập vào N và liệt kê các số nguyên tố thỏa mãn nhỏ hơn hoặc bằng N và có chữ số cuối cùng lớn nhất. Bạn cũng cần in ra số lượng số thỏa mãn.
*/
#include<stdio.h>
#include<math.h>

#define MAX 10000005

int prime[MAX];

void sieve(int n)
{
	for (int i = 0; i <= n; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j <= n; j += i)
			{
				prime[j] = 0;
			}
		}
	}
}

int check(int n)
{
	int lastDigit = n % 10;

	while (n)
	{
		if (n % 10 > lastDigit) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);

	sieve(n);
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (check(i) && prime[i])
		{
			printf("%d ", i);
			cnt++;
		}
	}

	printf("\n%d\n", cnt);
}