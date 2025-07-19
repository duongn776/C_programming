/*
Cho 2 số nguyên a và b. Bạn hãy tìm 2 số sau, 
số thứ 1 là số lớn nhất <= a mà chia hết cho b, số thứ 2 là số nhỏ nhất >=a mà chia hết cho b. Chú ý các bạn không được dùng vòng lặp.
*/

#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	int largest = (a / b) * b;
	int smallest = (a % b == 0) ? a : (a / b + 1) * b;

	printf("%d %d", largest, smallest);
}