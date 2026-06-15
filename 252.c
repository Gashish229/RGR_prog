#include <stdio.h>
#include <stdarg.h>

void myLogger(const char *format, ...) {
    printf("[LOG] ");
    va_list args;
    va_start(args, format);
    vprintf(format, args); // Передает аргументы в стандартный printf
    va_end(args);
    printf("\n");
}

int main() {
    myLogger("Запуск программы. ID: %d", 42);
    return 0;
}
