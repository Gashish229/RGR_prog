#include <stdio.h>

int main(void) {
    int n;
    int sum = 0;

    printf("Введите N: ");
    if (scanf("%d", &n) != 1) return 1;

    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Сумма: %d\n", sum);
    return 0;
}
