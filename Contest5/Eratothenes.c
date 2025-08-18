/* Sàng số nguyên tố Eratosthenes
Điều kiện: n <= 10^7, cần phải có 1 mảng đánh dấu cỡ n + 1

B1: Giả sử tất cả các số từ 0 đến n đều là số nguyên tố 
    (prime[i] = 1 nghĩa là i được coi là nguyên tố).
B2: Duyệt từng số i từ 2 tới sqrt(n):
      - Nếu i là số nguyên tố (prime[i] == 1) 
        thì loại bỏ (đánh dấu prime[j] = 0) với mọi bội số j = i*i, i*i+i, ... ≤ n.
B3: Sau khi sàng xong, các số còn có prime[i] == 1 chính là số nguyên tố.

Nếu a là ước số của b thì b là bội số của a.

Ví dụ:

2 là ước số của 10 ⟺ 10 là bội số của 2.

5 là ước số của 20 ⟺ 20 là bội số của 5.
*/

#include<stdio.h>
#include<math.h>

int prime[10000001];

void sieve(int n)
{
	// B1: giả sử tất cả đều là số nguyên tố
	for (int i = 0; i <= n; i++) prime[i] = 1;

	prime[0] = prime[1] = 1; // 0 và 1 không phải số nguyên tố
	
	// B2: bắt đầu sàng
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (prime[i]) 
		{ 
			// nếu i là số nguyên tố
			for (int  j = i * i; j <= n; j += i)
			{
				prime[j] = 0;
			}

		}
	}
	// In ra các số nguyên tố tìm được
    for (int i = 2; i <= n; i++) {
        if (prime[i]) printf("%d ", i);
    }
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);
    sieve(n);
    return 0;
}