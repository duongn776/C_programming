/*
Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích của ba thừa số nguyên tố khác nhau.
*/
#include<stdio.h>
#include<math.h>

int checkSphenic(long long n)
{
	int cnt = 0; 
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			int times = 0;
			while (n % i == 0)
			{
				times++;
				n /= i;
			}
			if (times > 1) return 0;
			cnt++;
		}
	}
	if (n != 1) cnt++;

	return cnt == 3;
}

int main()
{
	long long n;
	scanf("%lld", &n);

	printf("%d", checkSphenic(n));
}