#include <stdio.h>
#define PRINT_EXPR(expr) printf(#expr " = %d\n", expr)

int main() {
    int a = 5, b = 10;
    PRINT_EXPR(a + b); // Выведет: a + b = 15
    return 0;
}
