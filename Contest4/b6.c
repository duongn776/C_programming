/*
Dãy số fibonacci là dãy số thỏa mãn : F1=0, F2=1, Fn=Fn-1+Fn-2. Hãy tìm số Fibonacci thứ n sử dụng đệ quy.
*/

#include<stdio.h>

int Fibo(int n) {
    if (n == 1) return 0;  // F1 = 0
    if (n == 2) return 1;  // F2 = 1
    return Fibo(n - 1) + Fibo(n - 2);
}
int main()
{
	int n;
	scanf("%d", &n);

	printf("%d", Fibo(n));
}