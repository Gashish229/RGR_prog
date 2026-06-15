#include <stdio.h>

int main(void) {
    int num, original, reversed = 0;

    printf("Введите число: ");
    if (scanf("%d", &num) != 1 || num < 0) return 1;

    original = num; // Сохраняем оригинал

    while (num > 0) {
        reversed = reversed * 10 + (num % 10); // Наращивание разрядов перевернутого числа
        num /= 10;
    }

    if (original == reversed) {
        printf("Палиндром\n");
    } else {
        printf("Не палиндром\n");
    }
    return 0;
}
