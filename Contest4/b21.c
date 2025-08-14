#include<stdio.h>

int check(int a[], int left, int right)
{
	if (left >= right) return 1;
	if (a[left] != a[right]) return 0;

	return check(a, left + 1, right - 1);
}

int main()
{
	int n;
	scanf("%d", &n);

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	if (check(arr, 0, n - 1))
	{
		printf("YES");
	}else {
		printf("NO");
	}
}