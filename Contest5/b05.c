#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int isfind = 0;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			if (a[i] % 2 == 0)
			{
				printf("%d ", a[i]);
				isfind = 1;
			}
		}
	}

	if (!isfind) printf("NONE");
}