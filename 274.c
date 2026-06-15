#include <stdio.h>

int main() {
    int num = 10; // 1010
    int bit_pos = 1;
    
    // Побитовое исключающее ИЛИ (XOR) переключает бит
    num = num ^ (1 << bit_pos); 
    printf("Результат: %d\n", num); // 1000 (8 в десятичной)
    return 0;
}
