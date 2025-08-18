#include<stdio.h>

int isCheck(int a[], int n)
{
	int left = 0;
	int right = n - 1;
	while (left <= right)
	{
		if (a[left++] != a[right--]) return 0;
	}
	return 1;
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

	if (isCheck(a, n))
	{
		printf("YES");
	}else {
		printf("NO");
	}

}