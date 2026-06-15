#include <stdio.h>

int divide(int a, int b, int *result) {
    if (b == 0) return -1; // Код ошибки
    *result = a / b;
    return 0; // Успех
}

int main() {
    int res;
    int status = divide(10, 0, &res);
    if (status != 0) {
        printf("Произошла ошибка (код %d)\n", status);
        return status;
    }
    return 0;
}
