#include <stdio.h>

int main() {
    int flags = 0; // 00000000
    int bit_to_set = 2; // Установим 2-й бит (счет с нуля)
    
    flags = flags | (1 << bit_to_set);
    printf("После установки 2-го бита: %d\n", flags); // Выведет 4
    return 0;
}
