/*Theo Goldbach conjecture, một số nguyên dương chẵn >=4 đều có thể biểu diễn dưới dạng tổng của 2 số nguyên tố.

Cho số nguyên dương chẵn N >=4 .

Hãy liệt kê các cặp số nguyên tố p, q có tổng đúng bằng N.
*/
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

int main(){
	int t; scanf("%d", &t);
	while (t--)
	{
		int n; scanf("%d", &n);
		for (int i = 1; i <= n / 2; i++)
		{
			if (isPrime(i) && isPrime(n - i))
			{
				printf("%d %d\n", i, n - i);
			}
		}
	}
}