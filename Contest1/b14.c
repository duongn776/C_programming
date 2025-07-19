/*
Xếp loại học sinh
*/
#include<stdio.h>

int main()
{
	double a, b, c, d;
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

	double res = (a + b + (2 * c) + (3 * d)) / 7;

	if (res >= 8)
	{
		printf("GIOI\n");
	}else if (res >= 6.5)
	{
		printf("KHA\n");
	}else if (res >= 5)
	{
		printf("TRUNG BINH\n");
	}else {
		printf("YEU\n");
	}
}