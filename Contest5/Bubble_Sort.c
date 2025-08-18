#include<stdio.h>

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubbleSort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int swapped = 0;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				swapped = 1;
			}
		}
		printf("Sau vong lap i = %d: ", i);  
        printArray(a, n);
		if (!swapped) break;
	}
}
int main() {
    int a[] = {5, 1, 4, 2, 8};
    int n = 5;

    bubbleSort(a, n);

    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}

