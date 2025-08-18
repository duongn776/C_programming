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
	int x;
	scanf("%d", &x);
	int greaterX = 0, smallerX = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > x) greaterX++;
		else if (a[i] < x) smallerX++;
	}

	printf("%d\n", smallerX);
	printf("%d\n", greaterX);
}