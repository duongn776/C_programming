#include<stdio.h>

int check[10000001];

int main()
{
	int n;
	scanf("%d", &n);


	for (int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		if (check[x])
		{
			printf("%d", x);
			return 0;
		}
		check[x] = 1;
	}

	printf("-1");
}