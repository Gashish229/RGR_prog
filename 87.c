#include <stdio.h>

int main() {
    int flags = 5; // 0101
    int bit_to_toggle = 0;
    
    flags = flags ^ (1 << bit_to_toggle); // Инверсия 0-го бита
    printf("После переключения: %d\n", flags); // Выведет 4 (0100)
    return 0;
}
