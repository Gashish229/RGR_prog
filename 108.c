#include <stdio.h>

int main(void) {
    int num;
    int sum = 0;

    while (1) {
        printf("Введите число (0 для выхода): ");
        if (scanf("%d", &num) != 1) return 1;

        if (num == 0) {
            break; // Мгновенный выход из бесконечного цикла
        }

        if (num % 2 == 0) {
            sum += num;
        }
    }

    printf("Сумма чётных чисел: %d\n", sum);
    return 0;
}
