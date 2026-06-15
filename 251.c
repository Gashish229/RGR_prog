#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t exact_32 = 2147483647; // Точно 32 бита на любой платформе
    uint64_t exact_64_unsigned = 9223372036854775807ULL;
    
    printf("Размер 32-бит: %zu байт\n", sizeof(exact_32));
    printf("Размер 64-бит: %zu байт\n", sizeof(exact_64_unsigned));
    return 0;
}
