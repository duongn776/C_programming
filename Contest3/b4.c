/*
Tìm ước số nguyên tố lớn nhất của một số nguyên dương.
*/
#include<stdio.h>
#include<math.h>

int find(int n)
{
	int res = -1;
	for (int i = 2; i<= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				res = i;
				n /= i;
			}
		}
	}

	if (n > 1)
	{
		res = n;
	}

	return res;
}

int main()
{
	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n;
		scanf("%d", &n);
		printf("%d\n", find(n));
	}

}