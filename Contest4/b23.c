#include<stdio.h>

int allEvenDigits(int a[], int idx, int n)
{
	if (idx >= n) return 1;
	if (a[idx] % 2 != 0) return 0;
	return allEvenDigits(a, idx + 1, n);
}

int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    if (allEvenDigits(A, 0, N))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
