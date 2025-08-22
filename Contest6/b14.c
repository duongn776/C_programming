#include<stdio.h>

int giao[10000001], hop[10000001];

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	int a[n], b[m];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int j = 0; j < m; j++)
	{
		scanf("%d", &b[j]);
	}

	int giaoIndex = 0, hopIndex = 0;
	int i = 0, j = 0;

	while (i < n && j < m)
	{
		if (a[i] == b[j])
		{
			hop[hopIndex] = a[i];hopIndex++;
			giao[giaoIndex] = a[i]; giaoIndex++; i++; j++;
		}else if (a[i] < b[j])
		{
			hop[hopIndex] = a[i]; hopIndex++; i++;
		}else {
			hop[hopIndex] = b[j]; hopIndex++; j++;
		}
	}
	while (i < n) hop[hopIndex++] = a[i++];
	while (j < m) hop[hopIndex++] = b[j++];

	for (int i = 0; i < hopIndex; i++)
	{
		printf("%d ", hop[i]);	
	}
	printf("\n");
	for (int j = 0; j < giaoIndex; j++)
	{
		printf("%d ", giao[j]);	
	}
}