#include <stdio.h>

int main() {
    double a, b;
    char op;
    printf("Введите выражение (например, 5 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);
    switch(op) {
        case '+': printf("Результат: %.2lf\n", a + b); break;
        case '-': printf("Результат: %.2lf\n", a - b); break;
        case '*': printf("Результат: %.2lf\n", a * b); break;
        case '/': 
            if (b != 0) printf("Результат: %.2lf\n", a / b); 
            else printf("Ошибка: деление на ноль\n");
            break;
        default: printf("Неизвестная операция\n");
    }
    return 0;
}
