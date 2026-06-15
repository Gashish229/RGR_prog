#include <stdio.h>

unsigned int keep_k_upper_bits(unsigned int num, int k) {
    int total_bits = sizeof(unsigned int) * 8; // 32 бита
    // Создаем маску старших битов. Инвертируем маску младших и сдвигаем
    unsigned int mask = ~((1U << (total_bits - k)) - 1);
    return num & mask;
}

int main(void) {
    unsigned int number = 0xFFFFFFFF; // Все единицы
    unsigned int result = keep_k_upper_bits(number, 4);
    
    printf("Остались только 4 старших бита: 0x%X\n", result); // Выведет 0xF0000000
    return 0;
}
