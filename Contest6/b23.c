#include<stdio.h>


void merge(int a[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;
	int Left[n1], Right[n2];

	for (int i = 0; i < n1; i++)
	{
		Left[i] = a[l + i];
	}
	for (int j = 0; j < n2; ++j)
	{
		Right[j] = a[m + 1 + j];
	}

	int i = 0, j = 0, k = l;
	while (i < n1 && j < n2)
	{
		if (Left[i] <= Right[j])
		{
			a[k++] = Left[i++];
		}else {
			a[k++] = Right[j++];
		}
	}
	while (i < n1) a[k++] = Left[i++];
	while (j < n2) a[k++] = Right[j++];
}

void mergeSort(int a[], int l, int r)
{
	if (l < r)
	{
		int m = (l + r) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);
		merge(a, l, m, r);
	}
}


int main()
{
	int n;
	scanf("%d", &n);

	int a[n], b[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	mergeSort(a, 0, n - 1);
	mergeSort(b, 0, n - 1);

	for (int i = 0; i < n; ++i)
	{
		printf("%d %d ", a[i], b[n - i - 1]);
	}

}