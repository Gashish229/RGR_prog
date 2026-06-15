#include <stdio.h>

unsigned int swap_bits(unsigned int num, int k, int m) {
    // Извлекаем значения k-го и m-го битов
    unsigned int bit_k = (num >> k) & 1;
    unsigned int bit_m = (num >> m) & 1;
    
    if (bit_k != bit_m) {
        // Если биты разные, инвертируем их позиции через маску исключающего ИЛИ (^)
        unsigned int mask = (1U << k) | (1U << m);
        num ^= mask;
    }
    return num;
}

int main(void) {
    unsigned int number = 0b00000010; // Установлен 1-й бит
    unsigned int result = swap_bits(number, 1, 3); // Меняем 1-й и 3-й биты местами
    
    printf("После обмена бит: %u\n", result); // Выведет 8 (0b00001000)
    return 0;
}
