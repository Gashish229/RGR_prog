#include <stdio.h>

int main() {
    int choice;
    double a, b;
    printf("Меню:\n1 - сложение\n2 - вычитание\n3 - умножение\n4 - деление\nВыбор: ");
    scanf("%d", &choice);
    printf("Введите два числа: ");
    scanf("%lf %lf", &a, &b);
    
    switch(choice) {
        case 1: printf("Результат: %.2lf\n", a + b); break;
        case 2: printf("Результат: %.2lf\n", a - b); break;
        case 3: printf("Результат: %.2lf\n", a * b); break;
        case 4: 
            if (b != 0) printf("Результат: %.2lf\n", a / b);
            else printf("Ошибка: деление на ноль\n");
            break;
        default: printf("Неверный ввод операции\n");
    }
    return 0;
}
