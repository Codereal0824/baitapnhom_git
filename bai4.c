#include <stdio.h>
void xeploai(){
    float van, toan, anh;
    printf("Nhap diem van: ");
    scanf("%f", &van);
    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("Nhap diem anh van: ");
    scanf("%f", &anh);

    float diemcuoiky = (van * 2 + toan * 2 + anh) / 5;
    printf("Diem cuoi ky: %.2f\n", diemcuoiky);

    if (diemcuoiky < 3) {
        printf("Hoc luc: Yeu\n");
    } else if (diemcuoiky >= 3 && diemcuoiky <= 5) {
        printf("Hoc luc: Trung binh\n");
    } else if (diemcuoiky > 5 && diemcuoiky <= 7.9) {
        printf("Hoc luc: Kha\n");
    } else {
        printf("Hoc luc: Gioi\n");
    }
}