#include <stdio.h>
#define MAX_SIZE 100
int main () {
    int n; // n = so luong sinh vien
    int A[MAX_SIZE]; // A[] = mang chua diem
    float total = 0;
    int count = 0;

    //Nhap so luong hoc sinh hop le (0-100)
    do{
        printf("Nhap vao so luong h/s (0-100):\n");
        scanf("%d",&n);
        if (n < 0 || n > 100){
            printf("\n So luong h/s \"KHONG HOP LE !!!\" \n ");
        }
    }while(n < 0 || n > 100);

    //Them phan tu vao arrray
    for(int i = 0; i < n;i++){
        printf("Nhap vao diem h/s thu %d(0-10):\n",i+1);
        scanf("%d", &A[i]);
        while(A[i] < 0 || A[i] > 10) {
            printf(" So nhap KHONG HOP LE \n");
            printf("Nhap vao diem h/s thu %d(0-10):\n",i+1);
            scanf("%d", &A[i]);
        }
    }

    //3a: Tính và in ra điểm trung bình của cả lớp
    for (int i =0; i<n ;i++){
        total+=A[i];
    }printf("\n3a.\n");
    printf("- Diem trung binh: %.2f \n",total/n);
    //3b: Tìm mức điểm cao nhất lớp và in ra số lượng sinh viên đạt mức điểm đó.
    float scoreMax = A[0];
    for(int i = 1;i < n;i++){
        if (A[i] > scoreMax){
            scoreMax = A[i];
        }}
    //Dem so diem scoreMax
    for (int i = 0;i < n;i++){
        if (A[i] == scoreMax){
            count++;
        }}
    printf("3b.\n");
    printf("- Diem cao nhat lop: %.2f\n",scoreMax);
    printf("- So luong h/s dat diem cao nhat lop: %d\n", count);

    return 0;
}
