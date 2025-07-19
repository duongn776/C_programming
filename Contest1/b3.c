/*
Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau: F = (C * 9 / 5) + 32. 
Viết chương trình C cho phép nhập vào nhiệt độ đo theo độ C là số nguyên dương không quá 10^6, 
thực hiện chuyển sang đơn vị đo độ F và in ra màn hình. In ra kết quả với 2 chữ số sau dấu phẩy thập phân
*/
#include<stdio.h>

int main()
{
	int C;
	scanf("%d", &C);

	double F = (1.0 * C * 9 / 5) + 32;

	printf("%.2lf", F);
}