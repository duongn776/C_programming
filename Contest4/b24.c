#include<stdio.h>

int isIncreasing(int a[], int idx, int n)
{
	if (idx >= n) return 1;
	if (a[idx] <= a[idx - 1]) return 0;
	return isIncreasing(a, idx + 1, n);
}

int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    if (isIncreasing(A, 1, N))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
