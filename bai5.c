#include <stdio.h>
void tinhTienDien(){
    int soDien;
    printf("Nhap so dien tieu thu: ");
    scanf("%d", &soDien);

    float tienDien = 0;

    if (soDien <= 100) {
        tienDien = soDien * 149;
    } else if (soDien <= 350) {
        tienDien = 100 * 149 + (soDien - 100) * 550;
    } else if (soDien <= 650) {
        tienDien = 100 * 149 + 250 * 550 + (soDien - 350) * 650;
    } else {
        tienDien = 100 * 149 + 250 * 550 + 300 * 650 + (soDien - 650) * 850;
    }

    printf("So tien dien phai tra: %.2f\n", tienDien);
}


