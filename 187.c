#include <stdio.h>

struct BadOrder {
    char a;      // 1 байт + 3 байта padding
    int b;       // 4 байта
    char c;      // 1 байт + 3 байта padding
};               // Итого: 12 байт

struct GoodOrder {
    int b;       // 4 байта
    char a;      // 1 байт
    char c;      // 1 байт + 2 байта padding
};               // Итого: 8 байт

int main() {
    printf("Размер BadOrder: %zu байт\n", sizeof(struct BadOrder));
    printf("Размер GoodOrder: %zu байт\n", sizeof(struct GoodOrder));
    return 0;
}
