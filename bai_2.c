/*
* Mức độ Vừa: Bộ Đếm Phân Loại Ký Tự
- Mục tiêu: Áp dụng xử lý ký tự trực tiếp trên luồng dữ liệu chuẩn (Standard I/O) bằng getchar() và putchar().
Kết hợp vòng lặp vô hạn và câu lệnh rẽ nhánh phức hợp (if-else if-else).
- Yêu cầu đề bài:
- Viết chương trình yêu cầu người dùng nhập vào một câu văn (kết thúc bằng phím Enter).
Chương trình không được dùng scanf đối với chuỗi, mà phải dùng vòng lặp while kết hợp getchar()
để đọc từng ký tự một cho đến khi gặp ký tự xuống dòng ('\n').
Đếm và in ra màn hình tổng số: Chữ cái in hoa, chữ cái in thường và các chữ số từ 0-9.
Trong quá trình đọc, nếu ký tự nhập vào là một chữ số, hãy dùng putchar() để in ngay chữ số đó ra
màn hình (tạo thành một dãy số được trích xuất từ câu).
- Ví dụ chạy chương trình:
     + Nhập câu của bạn: C lap trinh 101 nam 2026
     + Các số tìm thấy: 1012026
     Kết quả đếm:
     + Chữ cái in hoa: 1
     + Chữ cái in thường: 11
     + Chữ số: 7
*/
#include <stdio.h>

int main() {
    char c;
    int hoa = 0, thuong = 0, so = 0;

    printf("Nhap cau cua ban: ");

    while ((c = getchar()) != '\n') {
        if (c >= 'A' && c <= 'Z') {
            hoa++;
        } else if (c >= 'a' && c <= 'z') {
            thuong++;
        } else if (c >= '0' && c <= '9') {
            so++;
            putchar(c);
        }
    }
       printf("\n");

    // In kết quả
    printf("Ket qua dem:\n");
    printf("- Chu cai in hoa: %d\n", hoa);
    printf("- Chu cai in thuong: %d\n", thuong);
    printf("- Chu so: %d\n", so);

    return 0;
}



//
// Created by ACER on 28/04/2026.
//
