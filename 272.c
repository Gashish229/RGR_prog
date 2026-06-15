#include <stdio.h>

int main() {
    int num = 8; // 1000
    int bit_pos = 1; 
    
    num = num | (1 << bit_pos); // Побитовое ИЛИ с маской
    printf("Результат: %d\n", num); // 1010 (10 в десятичной)
    return 0;
}
