#include <stdio.h>

int main(void) {
    int num;
    printf("Введите число: ");
    if (scanf("%d", &num) != 1) return 1;

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    if (num < 0) num = -num; // Работаем с модулем числа

    while (num > 0) {
        printf("%d\n", num % 10);
        num /= 10;
    }
    return 0;
}
