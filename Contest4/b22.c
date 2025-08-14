#include<stdio.h>

void printLeftToRight(int a[], int n)
{
	if (n != 0)
	{
		printf("%d ", a[n - 1]);
		printLeftToRight(a, n - 1);
	}
}

void printRightToLeft(int a[], int n)
{
	if (n != 0 )
	{
		printRightToLeft(a, n - 1);
		printf("%d ", a[n - 1]);
	}
}

int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // In từ phải qua trái
    printRightToLeft(A, N);
    printf("\n");
    
    // In từ trái qua phải
    printLeftToRight(A, N);
    printf("\n");

    

    return 0;
}
