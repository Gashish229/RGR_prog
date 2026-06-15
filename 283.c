#include <stdio.h>

int main(void) {
    unsigned int original = 0x00FFFF00;
    // Унарный оператор побитового отрицания НЕ (тильда)
    unsigned int inverted = ~original;

    printf("Original: 0x%08X\n", original);
    printf("Inverted: 0x%08X\n", inverted); // Выведет 0xFF0000FF
    return 0;
}
