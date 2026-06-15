#include <stdio.h>

int main(void) {
    int a = 17, b = 5;
    int sum = a + b;
    int mult = a * b;
    int div = a / b; // Результат: 3 (а не 3.4!) 

    printf("Сумма: %d, Умножение: %d, Деление: %d\n", sum, mult, div);
    return 0;
}