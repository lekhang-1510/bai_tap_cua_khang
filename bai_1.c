/* BÀI TẬP 1:
* Mức độ Dễ: Bảng Cửu Chương Đa Năng
- Mục tiêu: Nắm vững cấu trúc vòng lặp cơ bản (for hoặc while), sử dụng biến, kiểu dữ liệu số nguyên và các hàm nhập xuất chuẩn (scanf, printf).
- Yêu cầu đề bài:
- Viết chương trình yêu cầu người dùng nhập vào một số nguyên dương N (với 1 <= N <= 9).
    + Nếu người dùng nhập sai (ví dụ số âm hoặc lớn hơn 9), in ra thông báo lỗi: "Gia tri khong hop le!" và kết thúc chương trình.
    + Nếu nhập đúng, chương trình sẽ in ra bảng cửu chương của số N đó.
    + Ví dụ chạy chương trình:
      Nhập số N (1-9): 7
      Bảng cửu chương 7:
      7 x 1 = 7
      7 x 2 = 14
      ...
      7 x 10 = 70
 */

#include <stdio.h>

int main() {
    int n;

    //Sử dụng do - while để bắt người dùng nhập n hợp lệ ( n <= 1 || n <= 9)
    do {
        printf("\nIn bang cuu chuong n\n");
        printf("Nhap vao n (1--9): ");
        scanf("%d", &n);
        while (getchar() != '\n');
        //Để lấy hết kí tự \n trong buffer - nếu nhập kí tự (giúp do - while ko bị lặp vô hạn)
        if (n < 1 || n > 9) {
            printf("\"GIA TRI KHONG HOP LE !!!\"\n");
        }
    } while (n < 1 || n > 9);

    //In bang cuu chuong n
    printf("Bang cuu chuong %d\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}//
// Created by ACER on 28/04/2026.
//
