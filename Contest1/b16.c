/*
Cho kí tự là chữ cái in hoa hoặc in thường, in ra kí tự kế tiếp sau nó trong bảng chữ cái ở dạng in thường, tức là kí tự nhập vào ở dạng in hoa hay in thường thì bạn đều in ra kí tự kế tiếp nó nhưng ở dạng in thường. Coi kí tự kế tiếp của của chữ Z là chữ A.
*/
#include<stdio.h>

int main()
{
	char c;
	scanf("%c", &c);

	if (c >= 'a' && c <= 'z')
	{
		if (c == 'z')
		{
			printf("a");
		}else {
			char next = c + 1;
			printf("%c", next);
		}
	}else if (c >= 'A' && c <= 'Z')
	{
		if (c == 'Z')
		{
			printf("a");
		}else {
			char next = c + 32 + 1;
			printf("%c", next);
		}
	}
}