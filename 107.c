#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int num;
    printf("Введите число: ");
    if (scanf("%d", &num) != 1) return 1;

    bool is_prime = true;
    if (num <= 1) {
        is_prime = false;
    } else {
        int d = 2;
        while (d * d <= num) { // Оптимальная проверка до корня из num
            if (num % d == 0) {
                is_prime = false;
                break;
            }
            d++;
        }
    }

    printf("Число %s\n", is_prime ? "простое" : "составное");
    return 0;
}
