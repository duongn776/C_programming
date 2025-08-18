#include<stdio.h>

void reverseArr(int a[], int n)
{
	int left = 0; 
	int right = n - 1;
	while (left <= right)
	{
		int temp = a[left];
		a[left] = a[right];
		a[right] = temp;
		left++;
		right--;
	}
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
	reverseArr(a, n);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}