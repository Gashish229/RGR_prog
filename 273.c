#include <stdio.h>

int main() {
    int num = 15; // 1111
    int bit_pos = 2;
    
    // Инвертируем маску (00000100 -> 11111011) и применяем побитовое И
    num = num & ~(1 << bit_pos); 
    printf("Результат: %d\n", num); // 1011 (11 в десятичной)
    return 0;
}
