/*
Selection sort: sắp xếp chọn
Ý tưởng: Ở mỗi bước, ta chọn phần tử nhỏ nhất (hoặc lớn nhất) trong đoạn chưa sắp xếp và đưa nó về đúng vị trí.
Cứ thế lặp lại cho đến khi mảng đã được sắp xếp.
*/
#include<stdio.h>

void selectionSortIncrease(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int minPos = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[minPos])
			{
				minPos = j;
			}
		}
		int tmp = a[i];
		a[i]= a[minPos];
		a[minPos] = tmp;
	}
}

void slectionSortDecrease(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int maxPos = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] > a[maxPos])
			{
				maxPos = j;
			}
		}
		int tmp = a[i];
		a[i]= a[maxPos];
		a[maxPos] = tmp;
	}
}

int main() {
    int a[] = {64, 25, 12, 22, 11};
    int n = 5;

    selectionSortIncrease(a, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    slectionSortDecrease(a, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}