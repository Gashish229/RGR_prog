#include <stdio.h>

unsigned int set_k_lower_bits(unsigned int num, int k) {
    // Создаем маску из K единиц. Например, для k=4: (1 << 4) - 1 = 16 - 1 = 15 (1111 в двоичной)
    unsigned int mask = (1U << k) - 1;
    return num | mask; // Устанавливаем биты через побитовое ИЛИ
}

int main(void) {
    unsigned int number = 0b10100000; 
    unsigned int result = set_k_lower_bits(number, 4);
    
    printf("Результат: 0x%X\n", result); // Выведет 0xAF (10101111)
    return 0;
}
