#include<stdio.h>

int main()
{
	int n; scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		int x; scanf("%d", &x);

		if (x % 2 == 0)
		{
			printf("EVEN\n");
		}else {
			printf("ODD\n");
		}
	}
}