/*
Nhập n không âm không quá 15, tính và in ra n! (n giai thừa)
*/
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	long long factorial = 1;

	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}

	printf("%lld", factorial);
}