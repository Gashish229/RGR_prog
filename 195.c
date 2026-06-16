#include <stdio.h>

#define PRINT_SIZE(type) printf("Размер " #type ": %zu байт\n", sizeof(type))

int main() {
    PRINT_SIZE(int);
    PRINT_SIZE(double);
    return 0;
}
