#include <stdio.h>

int main(void) {
    int n;
    unsigned long long factual = 1; // Защита от быстрого переполнения

    printf("Введите N: ");
    if (scanf("%d", &n) != 1 || n < 0) return 1;

    int i = 1;
    while (i <= n) {
        factual *= i;
        i++;
    }

    printf("Факториал: %llu\n", factual);
    return 0;
}
