/*
Cho 3 cạnh a, b, c của một tam giác, nếu tam giác đã cho là tam giác đều thì in ra 1, tam giác cân thì in ra 2, tam giác vuông thì in ra 3, tam giác thường in ra 4, trường hợp tam giác nhập vào không hợp lệ thì in ra "INVALID".
*/
#include<stdio.h>

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	if (a > 0 && b > 0 && c > 0 && a + b > c && c + b > a && c + a > b)
	{
		if (a == b && b == c && c == a)
		{
			printf("1\n");
		}else if (a == b || b == c || c == a)
		{
			printf("2\n");
		}else if (a * a + b * b == c * c|| b * b + c * c == a * a || c * c + a * a == b * b)
		{
			printf("3\n");
		}else {
			printf("4\n");
		}
	}else {
		printf("INVALID\n");
	}
}