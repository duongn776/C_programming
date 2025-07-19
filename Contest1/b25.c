/*
28tech có rất nhiều tiền :v. Anh ta có n đô la trong ngân hàng. Vì lý do bảo mật, anh ta muốn rút tiền mặt (chúng tôi sẽ không tiết lộ lý do tại đây). Các mệnh giá cho tờ đô la là 1, 5, 10, 20, 100. Số tờ tiền tối thiểu mà 28tech có thể nhận được sau khi rút toàn bộ số dư của mình là bao nhiêu?
*/
#include<stdio.h>

int main()
{
	long long n;
	scanf("%lld", &n);

	int counts = 0;
	int bills[] = {100, 20, 10, 5, 1};

	for (int i = 0; i < 5; i++)
	{
		counts += n / bills[i];
		n %= bills[i];
	}

	printf("%d", counts);
}
