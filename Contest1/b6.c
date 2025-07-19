/*
Cho một số nguyên không âm N. Bạn hãy thực hiện viết câu lệnh để kiểm tra các điều kiện sau :
N có phải là số chẵn? (Kiểm tra số dư của n với 2 xem có bằng 0 hay không)
N có phải là số vừa chia hết cho 3 vừa chia hết cho 5? // Kết hợp 2 điều kiện chia hết bằng toán tử AND
N có phải là số chia hết 3 nhưng không chia hết cho 7? // Kết hợp 2 điều kiện bằng toán tử AND
N có phải là số chia hết cho 3 hoặc 7? // Dùng toán tử OR
N là số lớn hơn 30 và nhỏ hơn 50? // Dùng toán tử AND
N có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5? // if(n >= 30 &&())
N có phải là số có 2 chữ số có chữ tận cùng là một số nguyên tố? // Kiểm tra n nằm trong đoạn [10, 99], kiểm tra chữ số hàng đơn vị là 2, 3, 5 hoặc 7
N có phải là số không vượt quá 100 và chia hết cho 23?
N không thuộc đoạn [10, 20]?
N có chữ số tận cùng là bội số của 3?
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	if (n % 2 == 0)
	{
		printf("YES\n");
	}else {
		printf("NO\n");
	}

	if (n % 3 == 0 && n % 5 == 0)
	{
		printf("YES\n");
	}else {
		printf("NO\n");
	}

	if (n % 3 == 0 && n % 7 != 0)
	{
		printf("YES\n");
	}else {
		printf("NO\n");
	}

	if (n % 3 == 0 || n % 7 == 0)
	{
		printf("YES\n");
	}else {
		printf("NO\n");
	}

	if (n > 30 && n < 50)
	{
		printf("YES\n");
	}else {
		printf("NO\n");
	}

	if (n >= 30 && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0))
	{
		printf("YES\n");
	}else {
		printf("NO\n");
	}

	int lastDigit = n % 10;
	if ((n >= 10 && n <= 99) && (lastDigit == 2 || lastDigit == 3 || lastDigit == 5 || lastDigit ==7))
	{
		printf("YES\n");
	}else {
		printf("NO\n");
	}

	if (n <= 100 && n % 23 == 0)
	{
		printf("YES\n");
	}else {
		printf("NO\n");
	}

	if (n < 10 || n > 20)
	{
		printf("YES\n");
	}else {
		printf("NO\n");
	}

	if (lastDigit % 3 == 0)
	{
		printf("YES\n");
	}else {
		printf("NO\n");
	}

}
