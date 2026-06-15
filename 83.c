#include <stdio.h>
#include <stdarg.h>

int sumAll(int count, ...) {
    va_list args;
    va_start(args, count);
    
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int); // Извлекаем следующий int
    }
    
    va_end(args);
    return sum;
}

int main() {
    printf("Сумма: %d\n", sumAll(3, 10, 20, 30));
    return 0;
}
