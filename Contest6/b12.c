#include<stdio.h>

#define MAX 10000001

int freq[MAX];

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		freq[a[i]]++;
	}

	for (int i = 0; i < MAX; i++)
	{
		if (freq[i] > 0)
		{
			printf("%d %d\n", i, freq[i]);
		}
	}

	printf("\n");

	for(int i = 0; i < n; i++)
	{
		if (freq[a[i]] > 0)
		{
			printf("%d %d\n", a[i], freq[a[i]]);
			freq[a[i]] = 0;
		}
	}
}