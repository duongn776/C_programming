/*
Quảng trường Nhà hát ở thủ đô Berland có hình chữ nhật với kích thước n × m mét. Nhân dịp kỷ niệm thành phố, một quyết định đã được đưa ra để lát Quảng trường bằng những viên bằng đá granit vuông.

Mỗi viên đá hình vuông có kích thước a × a. Số lượng viên đá ít nhất cần thiết để lát Quảng trường là bao nhiêu?

Nó được phép che phủ bề mặt lớn hơn Quảng trường Nhà hát. Nó không được phép phá vỡ các viên đá. Các cạnh của viên đá phải song song với các cạnh của Quảng trường.

Gợi ý : Tính xem cần bao nhiêu viên đã để phủ kín chiều rộng, chiều dài của HCN rồi đem nhân vs nhau sẽ ra số viên đá cần, chú ý trường hợp n và m chia hết cho a hoặc ko chia hết.
*/
#include<stdio.h>

int main()
{
	long long n, m, a;
	scanf("%lld %lld %lld", &n, &m, &a);

	long long doc, ngang;
	if (n % a == 0)
	{
		doc = n / a;
	}else {
		doc = n / a + 1;
	}

	if (m % a == 0)
	{
		ngang = m / a;
	}else {
		ngang = m / a + 1;
	}

	printf("%lld", doc * ngang);
}