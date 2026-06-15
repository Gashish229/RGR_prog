#include <stdio.h>

int main() {
    int n;
    long long sum = 0;
    printf("Введите N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    printf("Сумма квадратов: %lld\n", sum);
    return 0;
}
