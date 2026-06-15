#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Введите число: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }
    if (sum == n && n != 0) {
        printf("Число совершенное\n");
    } else {
        printf("Число не совершенное\n");
    }
    return 0;
}
