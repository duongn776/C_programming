#include <stdio.h>

int C(int n, int k) {
    if (k == 0 || k == n) return 1;
    return C(n - 1, k - 1) + C(n - 1, k);
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        for (int space = 0; space < n - i; space++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("%d ", C(i, j));
        printf("\n");
    }
    return 0;
}
