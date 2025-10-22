#include <stdio.h>
void fibonacciNhoHonN(){
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);

    int a = 0, b = 1;
    printf("Cac so Fibonacci nho hon %d la:\n", n);
    while (a < n) {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}