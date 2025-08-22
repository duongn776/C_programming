#include <stdio.h>

#define ll long long

int main() {
    int N, Q;
    scanf("%d %d", &N, &Q);

    ll a[N + 1], prefix[N + 1];
    prefix[0] = 0;  // mốc ban đầu

    for (int i = 1; i <= N; i++) {
        scanf("%lld", &a[i]);
        prefix[i] = prefix[i - 1] + a[i];  // cộng dồn
    }

    while (Q--) {
        int l, r;
        scanf("%d %d", &l, &r);
        printf("%lld\n", prefix[r] - prefix[l - 1]);
    }

    return 0;
}
