#include <stdio.h>

int main(void) {
    int n;
    printf("Введите количество чисел N: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int sum = 0;
    int count = 0;
    int current_num = 1;

    while (count < n) {
        // Логическое ИЛИ (||) проверяет оба условия кратности
        if (current_num % 3 == 0 || current_num % 5 == 0) {
            sum += current_num;
            count++; // Увеличиваем счетчик найденных чисел
        }
        current_num++;
    }

    printf("Сумма первых %d чисел: %d\n", n, sum);
    return 0;
}
