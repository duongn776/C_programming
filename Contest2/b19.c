/*
28techland là vùng đất mà cư dân cực kì thích uống bia, vì thế để tăng số lượng bia bán ra các cửa hàng bia ở đây đưa ra khuyến mại như sau : Cứ 3 vỏ chai bia sẽ được đổi một chai bia mới. Biết rằng ở 28techland, mỗi chai bia có giá 28 xu, nhiệm vụ của bạn là xác định với N xu cho trước, bạn có thể mua được tối đa bao nhiêu chai bia tính cả việc đổi thưởng bằng vỏ chai?
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int bia = n / 28;
	int vo = bia;

	while (vo >= 3)
	{
		int doi = vo / 3;
		bia += doi;
		vo = vo % 3 + doi;
	}
	printf("%d", bia);
}