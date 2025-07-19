/*
Trong lớp có N sinh viên, muốn chọn ra 2 bạn sinh viên để tham gia cuộc thi khiêu vũ, hỏi có bao nhiêu cách?
*/
#include<stdio.h>
int main()
{
	long long n;
	scanf("%lld", &n);

	long long res = n * (n - 1) / 2;

	printf("%lld", res);
}