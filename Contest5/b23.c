#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	int F[n];
	F[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		F[i] = a[i] + F[i - 1];
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", F[i]);
	}

}
