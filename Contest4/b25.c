#include<stdio.h>

int binarySearchDesc(int a[], int left, int right, int x)
{
	if (left > right) return 0;

	int mid = (left + right) / 2;

	if (a[mid] == x) return 1;
	else if (a[mid] < x)
		return binarySearchDesc(a, left, mid - 1, x);
	else
		return binarySearchDesc(a, mid + 1, right, x); 
}

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
	printf("%d\n", binarySearchDesc(a, 0, n - 1, x));
}