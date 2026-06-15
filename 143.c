#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("5-е число Фибоначчи: %d\n", fibonacci(5)); // 5
    return 0;
}
