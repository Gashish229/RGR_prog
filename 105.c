#include <stdio.h>

int main(void) {
    int num;
    int count = 0;

    printf("Введите число: ");
    if (scanf("%d", &num) != 1) return 1;

    // Обработка случая, если введено число 0
    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            count++;
            num /= 10;
        }
    }

    printf("Количество цифр: %d\n", count);
    return 0;
}
