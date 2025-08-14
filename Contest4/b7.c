#include <stdio.h>

// Hàm tính giai thừa
int giaiThua(int n) {
    if (n == 0) return 1;
    return n * giaiThua(n - 1);
}

// Hàm tính tổ hợp C(n, k)
int toHop(int n, int k) {
    return giaiThua(n) / (giaiThua(k) * giaiThua(n - k));
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", toHop(n, k));
    return 0;
}
