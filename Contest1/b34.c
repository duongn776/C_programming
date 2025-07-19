    /*
    Có năm người chơi một trò chơi gọi là "Sự hào phóng". Mỗi người đưa ra một số lượng tiền xu khác không b như một lần đặt cược ban đầu. Sau khi tất cả người chơi đặt cược tiền xu của họ, thao tác sau được lặp lại nhiều lần: một đồng xu được chuyển từ người chơi này sang người chơi khác. Nhiệm vụ của bạn là viết một chương trình có thể, với số lượng xu mà mỗi người chơi có vào cuối trò chơi, xác định kích thước b của lần đặt cược ban đầu hoặc chỉ ra rằng kết quả của trò chơi không thể đạt được.
    */
    #include <stdio.h>

    int main() {
        int c1, c2, c3, c4, c5;
        scanf("%d%d%d%d%d", &c1, &c2, &c3, &c4, &c5);

        int sum = c1 + c2 + c3 + c4 + c5;

        if (sum % 5 == 0 && sum != 0)
            printf("%d\n", sum / 5);
        else
            printf("-1\n");

        return 0;
    }
