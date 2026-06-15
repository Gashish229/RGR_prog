#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Введите N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) count++;
    }
    printf("Количество нечётных: %d\n", count);
    return 0;
}
