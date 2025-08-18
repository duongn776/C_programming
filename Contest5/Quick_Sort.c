#include<stdio.h>

void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int partition(int a[], int l, int r)
{
	int i = l - 1;
	int pivot = a[r];

	for (int j = l; j < r; j++)
	{
		if (pivot >= a[j])
		{
			i++;
			swap(&a[i], &a[j]);
		}
	}
	i++;
	swap(&a[i], &a[r]);
	printf("Phan hoach tu chi so : %d toi %d\n", l, r);
	for (int i = l; i <= r; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return i;
}

void quickSort(int a[], int l, int r)
{
	printf("Loi goi ham quickSort: %d %d\n", l, r);
	if (l < r)
	{
		int pos = partition(a, l, r);
		quickSort(a, l, pos - 1);
		quickSort(a, pos + 1, r);
	}
}

// In mảng
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int a[] = {2, 5, 1, 4, 3};
    int n = sizeof(a)/sizeof(a[0]);

    printf("Original: ");
    printArray(a, n);

    quickSort(a, 0, n-1);

    printf("Sorted: ");
    printArray(a, n);
}