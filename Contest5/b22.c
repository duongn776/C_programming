#include<stdio.h>

int main()
{
	int n, x;
	scanf("%d%d", &n, &x);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	int pos = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			pos = i;
			break;
		}
	}
	

	if (pos != -1)
	{
		for (int i = pos; i < n - 1; i++)
		{
			a[i] = a[i + 1];
		}

		n--;

		for (int i = 0; i < n; ++i)
		{
			printf("%d ", a[i]);
		}
	}else {
		printf("NOT FOUND");
	}
}