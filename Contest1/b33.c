/*
Polycarp có ba chị em: Alice, Barbara và Cerene. Họ đang thu thập tiền xu. Hiện tại, Alice có a đồng tiền, Barbara có b đồng tiền xu và Cerene có c đồng tiền xu. Gần đây Polycarp đã trở về từ chuyến đi vòng quanh thế giới và mang theo n xu.
Anh ta muốn phân phối tất cả n xu này giữa các chị em của mình theo cách mà số lượng tiền Alice có bằng số lượng tiền mà Barbara có và bằng với số lượng tiền mà Cerene có.
Nói cách khác, nếu Polycarp đưa A xu cho Alice, B xu cho Barbara và C xu cho Cerene (A + B + C = n), thì a + A = b + B = c + C. Lưu ý rằng A, B hoặc C (số lượng tiền mà Polycarp đưa cho Alice, Barbara và Cerene tương ứng) có thể là 0. Nhiệm vụ của bạn là tìm hiểu xem có thể phân phối tất cả n xu giữa các chị em theo cách được mô tả ở trên không.
*/
#include<stdio.h>

int main()
{
	int a, b, c, n;
	scanf("%d%d%d%d", &a, &b, &c, &n);

	int tong = a + b + c + n;
	if (tong % 3 == 0)
	{
		int res = tong / 3;
		if (res >= a && res >= b && res >= c)
		{
			printf("YES\n");
		}else {
			printf("NO\n");
		}
	}else {
		printf("NO\n");
	}
}