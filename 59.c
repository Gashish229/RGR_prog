#include <stdio.h>

int main(void) {
    int divisor = 0;

    // Правая часть выражения (10 / divisor) не вычисляется!
    if (divisor != 0 && (10 / divisor) > 1) {
        printf("Success\n");
    } else {
        printf("Короткое замыкание предотвратило деление на ноль.\n");
    }
    return 0;
}
