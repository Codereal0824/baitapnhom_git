#include <stdio.h>
void giaiThua(int n){
    if(n < 0){
        return -1; // Giai thua khong dinh nghia cho so am
    }
    if(n == 0 || n == 1){
        return 1; // Giai thua cua 0 va 1 la 1
    }
    long long result = 1;
    for(int i = 2; i <= n; i++){
        result *= i;
    }
}