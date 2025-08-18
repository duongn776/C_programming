#include<stdio.h>

void insertionSort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = a[i];
		int pos = i - 1;
		while (pos >= 0 && key < a[pos])
		{
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = key;

		// Debug: in ra sau mỗi vòng
        printf("Sau i = %d: ", i);
        for (int k = 0; k < n; k++) printf("%d ", a[k]);
        printf("\n");
	}
}

int main() {
    int arr[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
}