#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j <= i)
			{
				printf("*");
			}else {
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");

	for (int i = n; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			printf(" ");
		}

		for (int k = 1; k <= i; ++k)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j <= n - i; j++)
		{
			printf(" ");
		}

		for (int k = 1; k <= i; ++k)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	// Hinh 5
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (i == 1 || j == 1 || i == n || j == i) {
				printf("*");
			}else {
				printf(" ");
			}
		}
		printf("\n");
	}
}