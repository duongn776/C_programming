/*
Cho kí tự c, nếu kí tự c là chữ cái in thường thì chuyển nó thành chữ cái in hoa tương ứng và ngược lại nếu c là chữ cái in hoa thì chuyển nó thành chữ cái in thường tương ứng. Trường hợp kí tự nhập vào không phải là chữ cái thì không thay đổi nó.
*/
#include<stdio.h>

int main()
{
	char c;
	scanf("%c", &c);

	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}else if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	printf("%c", c);
}