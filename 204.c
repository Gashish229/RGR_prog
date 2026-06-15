#include <stdio.h>

int f_square(int x) { return x * x; }

// Функция принимает адрес другой функции в качестве третьего параметра
void print_table(int start, int end, int (*func_ptr)(int)) {
    for (int x = start; x <= end; x++) {
        printf("x = %d, f(x) = %d\n", x, func_ptr(x));
    }
}

int main(void) {
    print_table(1, 4, f_square); // Передаем имя функции как её адрес
    return 0;
}
