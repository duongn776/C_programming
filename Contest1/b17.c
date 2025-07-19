/*
Cho một kí tự, bạn hãy kiểm tra kí tự nhập vào là chữ cái in hoa, in thường, chữ số hay kí tự đặc biệt (các kí tự không phải là chữ cái và chữ số)
*/

#include<stdio.h>

int main()
{
	char c;
	scanf("%c", &c);

	if (c >= 'A' && c <= 'Z')
	{
		printf("UPPER");
	}else if (c >= 'a' && c <= 'z')
	{
		printf("LOWER");
	}else if (c >= '0' && c <= '9')
	{
		printf("DIGIT");
	}else {
		printf("SPECIAL");
	}
}