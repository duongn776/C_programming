/*
Cho 3 cạnh a, b, c là độ dài 3 cạnh của tam giác, kiểm tra xem a, b, c có thể tạo thành một tam giác hợp lệ hay không?
*/
#include<stdio.h>

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	if(a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && c + a > b)
	{
		printf("YES\n");
	}else {
		printf("NO\n");
	}
}