#include <stdio.h>

int main(void) {
    unsigned int num = 0xABCD; // 1010 1011 1100 1101 в двоичной системе
    
    // Задача: вырезать биты с 4 по 7 включительно.
    // Создаем маску 0xF0 (в двоичной: 0000 0000 1111 0000)
    unsigned int mask = 0xF0; 
    
    // Применяем маску через побитовое И (&)
    unsigned int result = num & mask;

    printf("Результат наложения маски: 0x%X\n", result); // Выведет 0xC0
    return 0;
}
