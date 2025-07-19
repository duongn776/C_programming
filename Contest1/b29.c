/*
Cho 4 số a, b, c, d. Hãy kiểm tra xem 4 số này có thể theo thứ tự tạo thành 1 cấp số nhân với công bội nguyên theo đúng thứ tự a, b, c, d hay không?
*/
#include<stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);

	if (b % a == 0)
	{
		int cb = b / a;
		if (b * cb == c && c * cb == d)
		{
			printf("YES");
		}else {
			printf("NO");
		}
	}else {
		printf("NO");
	}
}