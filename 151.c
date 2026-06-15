#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

int main(void) {
    // Объявление массива из 3 указателей на функции типа int (int, int)
    int (*operations[])(int, int) = {add, sub, mul};

    for (int i = 0; i < 3; i++) {
        // Вызов функции по адресу из массива указателей
        printf("Результат операции %d: %d\n", i, operations[i](10, 5));
    }
    return 0;
}
