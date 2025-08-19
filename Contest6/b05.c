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

	int is_check = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] >= a[i + 1])
		{
			is_check = 0;
			break;
		}
	}
	if (is_check) printf("YES\n");
	else printf("NO\n");
}