/*
Bạn có số lượng xu không giới hạn với các giá trị 1,2,3,……n (từ 1 tới n). Bạn muốn chọn một số bộ tiền có tổng giá trị S. Nó được phép có nhiều đồng tiền có cùng giá trị trong tập hợp. Số lượng đồng xu tối thiểu cần thiết để có được tổng S là bao nhiêu?
*/
#include<stdio.h>

int main()
{
	long long n, s;
	scanf("%lld%lld", &n, &s);

	if (s % n == 0)
	{
		printf("%lld", s/n);
	}else {
		printf("%lld", s/n + 1);
	}
}