#include <stdio.h>

int main(void) {
    int a = 15, b = 40;
    int max = (a > b) ? a : b; // Выбор большего значения

    printf("Max: %d\n", max);
    return 0;
}
