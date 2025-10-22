#include <stdio.h>
void nhapTu1DenN(){
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int input;
        printf("Nhap so thu %d: ", i);
        scanf("%d", &input);

        if (input != i) {
            printf("Nhap sai! Vui long nhap lai tu dau.\n");
            i = 0; // Reset i to 0, so that it becomes 1 in the next iteration
        }
    }

    printf("Ban da nhap dung tu 1 den %d!\n", n);
}