#include <stdio.h>

#define PRINT_VAR_NAME_AND_VALUE(x) printf("Переменная %s = %d\n", #x, x)

int main() {
    int magicNumber = 99;
    PRINT_VAR_NAME_AND_VALUE(magicNumber);
    return 0;
}
