#include <stdio.h>

struct BadLayout {
    char a;    // 1 байт + 3 байта отступа (padding)
    int b;     // 4 байта
    char c;    // 1 байт + 3 байта отступа
}; // Итого: 12 байт

struct GoodLayout {
    int b;     // 4 байта
    char a;    // 1 байт
    char c;    // 1 байт + 2 байта отступа в конце
}; // Итого: 8 байт

int main() {
    printf("Плохая структура: %zu байт\n", sizeof(struct BadLayout));
    printf("Хорошая структура: %zu байт\n", sizeof(struct GoodLayout));
    return 0;
}
