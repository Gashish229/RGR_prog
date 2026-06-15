#include <stdio.h>

struct OperationHandler {
    int id;
    int (*exec)(int); // Функция-обработчик внутри структуры
};

int double_val(int x) { return x * 2; }

int main(void) {
    struct OperationHandler handler = {1, double_val};
    
    // Вызов функции через поле структуры
    printf("Result: %d\n", handler.exec(50)); // Выведет 100
    return 0;
}
