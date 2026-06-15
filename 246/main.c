#include <stdio.h>
#include "calc.h" // Подключаем локальный модуль через кавычки ""

int main(void) {
    printf("Многофайловый проект. Результат: %d\n", sum_operation(15, 5));
    return 0;
}
