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

	int maxVal = -1e9, minVal = 1e9, maxPos = -1, minPos = -1;

	for (int i = 0; i < n; i++)
	{
		if (a[i] > maxVal)
		{
			maxVal = a[i];
			maxPos = i;
		}
		if (a[i] <= minVal)
		{
			minVal = a[i];
			minPos = i;
		}
	}
	printf("%d %d", minPos, maxPos);
}