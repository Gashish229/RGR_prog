#include <stdio.h>

// Определение структуры с битовыми полями
typedef struct {
    unsigned int is_active : 1; // Выделен ровно 1 бит
    unsigned int is_tested : 1; // Выделен ровно 1 бит
    unsigned int mode      : 3; // Выделено 3 бита (диапазон значений 0-7)
} StatusFlags;

int main(void) {
    StatusFlags flags = {1, 0, 5};

    printf("Active: %u, Tested: %u, Mode: %u\n", flags.is_active, flags.is_tested, flags.mode);
    printf("Размер структуры в памяти: %zu байт\n", sizeof(flags)); // Выведет 4 байта (размер int)
    return 0;
}
