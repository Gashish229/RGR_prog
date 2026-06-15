#include <stdio.h>

int main(void) {
    int power = 1;
    int result = 2;

    while (result <= 1000) {
        printf("2^%d = %d\n", power, result);
        power++;
        result <<= 1; // Побитовый сдвиг влево — быстрое умножение на 2
    }
    return 0;
}
