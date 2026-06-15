#include <stdio.h>

int main(void) {
    int num;
    printf("Введите число: ");
    if (scanf("%d", &num) != 1 || num <= 0) return 1;

    while (num > 0) {
        printf("%d", num % 10); // Вывод последней цифры
        num /= 10;              // Сдвиг числа вправо (удаление последней цифры)
    }
    printf("\n");
    return 0;
}
