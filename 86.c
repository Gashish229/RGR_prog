#include <stdio.h>

int main() {
    int flags = 7; // 00000111 (установлены 0, 1, 2 биты)
    int bit_to_clear = 1; // Сбросим 1-й бит
    
    flags = flags & ~(1 << bit_to_clear);
    printf("После сброса 1-го бита: %d\n", flags); // Выведет 5 (00000101)
    return 0;
}
