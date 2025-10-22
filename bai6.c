#include <stdio.h>
void bangCuuChuong(){
    int so;
    printf("Nhap so can in bang cuu chuong: ");
    scanf("%d", &so);

    printf("Bang cuu chuong cua %d:\n", so);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", so, i, so * i);
    }
}