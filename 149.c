#include <stdio.h>

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double div_op(double a, double b) { return b != 0 ? a / b : 0; }

int main() {
    double (*ops[4])(double, double) = {add, sub, mul, div_op};
    int choice;
    double a, b;
    
    printf("0:+, 1:-, 2:*, 3:/\nВыберите операцию: ");
    scanf("%d", &choice);
    printf("Введите два числа: ");
    scanf("%lf %lf", &a, &b);
    
    if (choice >= 0 && choice <= 3) {
        printf("Результат: %.2lf\n", ops[choice](a, b));
    } else {
        printf("Неверный выбор.\n");
    }
    return 0;
}
