/*
Một con ếch hiện đang ở điểm 0 trên trục tọa độ Ox. Nó nhảy theo thuật toán sau: bước nhảy thứ nhất là a đơn vị về bên phải, bước nhảy thứ hai là b đơn vị về bên trái, bước nhảy thứ ba là a đơn vị bên phải, bước nhảy thứ tư là b đơn vị bên trái, v.v.

.Nếu con ếch đã nhảy một số lần chẵn (trước lần nhảy hiện tại), nó nhảy từ vị trí hiện tại x sang vị trí x + a, mặt khác, nó nhảy từ vị trí hiện tại x sang vị trí x - b. Nhiệm vụ của bạn là tính toán vị trí của ếch sau k bước nhảy

Gợi ý : Tìm số bước nhảy của Frog sang bên trái và bên phải, gọi là t và p, khi đó vị trí của Frog sẽ là tổng khoảng cách nhảy sang phải - tổng khoảng cách nhảy sang trái.
*/
#include<stdio.h>

int main()
{
	int a, b, k;
	scanf("%d%d%d", &a, &b, &k);

	int left, right;
	if (k % 2 == 0)
	{
		left = right = k / 2;
	}else {
		left = k / 2;
		right = left + 1;
	}
	printf("%lld", 1ll * right * a - 1ll * left * b);
}