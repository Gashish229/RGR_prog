#include <stdio.h>

typedef struct {
    int (*operation)(int, int); // Поле структуры — указатель на функцию
} Calculator;

int add_fn(int a, int b) { return a + b; }

int main(void) {
    Calculator calc;
    calc.operation = add_fn; // Записываем адрес функции в поле структуры

    int res = calc.operation(20, 30);
    printf("Результат через структуру: %d\n", res);
    return 0;
}
