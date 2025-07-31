#include<stdio.h>

int main()
{
	int n; scanf("%d", &n);

	// hinh 1
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	// hinh 2
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (i == 1 || j == 1 || i == n || j == n)
			{
				printf("*");
			}else {
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == 1 || j == 1 || i == n || j == n)
			{
				printf("*");
			}else {
				printf("#");
			}
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == 1 || j == 1 || i == n || j == n)
			{
				printf("%d ", i);
			}else {
				printf("  ");
			}
		}
		printf("\n");
	}
}