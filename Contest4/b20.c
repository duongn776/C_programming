#include<stdio.h>
#include<math.h>

int F(int n)
{
	if (n == 1) return 0;
	else {
		int res1 = 1e9, res2 = 1e9, res3 = 1e9;
		if (n % 2 == 0) res1 = F(n / 2) + 1;
		if (n % 3 == 0) res2 = F(n / 3) + 1;
		if (n > 1) res3 = F(n - 1) + 1;
		return fmin(res1, fmin(res2, res3));
	}
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", F(N));
    return 0;
}