#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main(void) {
    int choice = 1; // Код операции
    // Указатель на функцию, принимающую два int и возвращающую int
    int (*calc)(int, int) = NULL;

    switch (choice) {
        case 1:  calc = add; break;
        case 2:  calc = sub; break;
        default: return 1;
    }

    if (calc != NULL) {
        printf("Результат: %d\n", calc(12, 4));
    }
    return 0;
}
