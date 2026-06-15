#include <stdio.h>

int main(void) {
    int num;
    int min, max;

    printf("Введите первое число (0 для выхода): ");
    if (scanf("%d", &num) != 1 || num == 0) return 0;

    min = max = num; // Инициализация начальными значениями

    while (1) {
        printf("Введите число (0 для выхода): ");
        if (scanf("%d", &num) != 1) return 1;

        if (num == 0) break;

        if (num > max) max = num;
        if (num < min) min = num;
    }

    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}
