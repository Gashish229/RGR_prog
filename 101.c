#include <stdio.h>

int main(void) {
    int k = 10; // Заданная сумма цифр

    for (int i = 10; i <= 99; i++) {
        int tens = i / 10;  // Число десятков (деление нацело)
        int units = i % 10; // Число единиц (остаток от деления)
        
        if (tens + units == k) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
