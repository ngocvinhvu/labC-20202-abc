// // Viet chuong trinh C:
// a: Khai bao mang d (chua xac dinh so phan tu) co kieu du lieu la float.
// Ben canh do co cac bien avg, std, max, min la so thuc. 
// Bien N la so nguyen.
// b: Viet ham void getData trong ham main roi in ra gia tri N.
// c: Goi ham getData trong ham main roi in ra gia tri N.
// d: Cap phat bo nho dong cho mang d co N phan tu. Viet vong lap for yeu cau
// Nhap gia tri diem cho N mon hoc.
// e, Duyet cac phan tu cua mang d, neu diem am hoac lon hon 10 thi gan bang
// 0.
// Neu diem le khong phai la 0.5 thi bo di phan thap phan.
// f: Duyet cac phan tu cua mang d, tim ra trung binh cong, max, min va do lech chuan.
// neu do lech chuan > 2 ket luan hoc sinh kia hoc lech.

#include<stdio.h>

float d[0];
float avg, std, max, min;
int N;

int main(void) {
    printf("Nhap vao gia tri N\n");
    void getData() {
        scanf("%d", &N);
    }
    getData();
    printf("Gia tri cua N la %d\n", N);
}


