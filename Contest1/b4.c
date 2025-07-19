/*
Cho bán kính R của hình tròn. Yêu cầu tính chu vi và diện tích của hình tròn đó. Lấy PI = 3.14
*/
#include<stdio.h>
int main()
{
	int r;
	scanf("%d", &r);

	double chuvi = 2 * 3.14 * r;
	double dientich = 3.14 * r * r;

	printf("%.4lf %.4lf", chuvi, dientich);
}