#include <stdio.h>

int add_op(int a, int b) { return a + b; }
int sub_op(int a, int b) { return a - b; }

int main(void) {
    // Массив из двух указателей на функции
    int (*operations[2])(int, int) = {add_op, sub_op};

    for (int i = 0; i < 2; i++) {
        printf("Операция %d: %d\n", i, operations[i](10, 5));
    }
    return 0;
}
