/*
Cho trước N ngày, hãy đổi N thành số năm, số tuần và số ngày. Biết rằng một năm có 365 ngày.
*/
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int years = n / 365;
	int remaining_days = n % 365;
	int weeks = remaining_days / 7;
	int days = remaining_days % 7;

	printf("%d %d %d", years, weeks, days);

}