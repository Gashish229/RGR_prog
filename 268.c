#include <stdio.h>

int* myFunc(int a) {
    static int result;
    result = a * 10;
    return &result;
}

int main() {
    // Указатель на функцию, принимающую int и возвращающую int*
    int* (*funcPtr)(int) = myFunc;
    
    int *res = funcPtr(5);
    printf("Результат: %d\n", *res); // 50
    return 0;
}
