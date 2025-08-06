/*
Một số được coi là số đẹp khi nó đồng thời vừa chia hết cho một số nguyên tố và chia hết cho bình phương của số nguyên tố đó.

Hãy liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương a, b cho .
*/
#include<stdio.h>
#include<math.h>

int isBeautiful(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			int cnt = 0;
			while (n % i == 0)
			{
				cnt++;
				n /= i;
				if (cnt >= 2) return 1;
			}
		}
	}

	return 0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (isBeautiful(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}