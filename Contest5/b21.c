#include<stdio.h>

int main()
{
	int n,x,k;
	scanf("%d%d%d", &n,&x,&k);

	int a[n+1];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = n - 1; i >= k - 1; i--)
	{
		a[i + 1] = a[i];
	}
	a[k - 1] = x;
	n++;

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}