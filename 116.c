#include <stdio.h>

int main(void) {
    int num;
    int sum = 0;
    int count = 0;

    while (1) {
        printf("Введите положительное число (отрицательное для выхода): ");
        if (scanf("%d", &num) != 1) return 1;

        if (num < 0) break; // Маркер выхода

        sum += num;
        count++;
    }

    if (count > 0) {
        // Явное приведение типов (int -> float) для точного деления
        printf("Среднее арифметическое: %.2f\n", (float)sum / count);
    } else {
        printf("Последовательность пуста.\n");
    }
    return 0;
}
