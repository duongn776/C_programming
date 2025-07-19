/*
Cho một số thực a, hãy tìm số nguyên gần a nhất. Trong trường hợp phần thực của a = 0.5 thì làm tròn lên
*/
#include<stdio.h>
#include<math.h>

int main()
{
	float a;
	scanf("%f", &a);

	int res = round(a);
	printf("%d", res);
}