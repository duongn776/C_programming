#include<stdio.h>
void printBinary(long long n)
{
	if (n == 0) return;
	printBinary(n / 2);
	printf("%lld", n % 2);
}

int main() {
    long long n;
    scanf("%lld", &n);

    if (n == 0) printf("0");
    else {
    	printBinary(n);
    }
}