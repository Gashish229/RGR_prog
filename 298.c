#include <stdio.h>

// Рекомендация компилятору встроить тело функции вместо совершения вызова
static inline int get_max(int a, int b) {
    return (a > b) ? a : b;
}

int main(void) {
    int x = 15, y = 42;
    int max_val = get_max(x, y); // Текст кода оптимизируется на месте

    printf("Максимум: %d\n", max_val);
    return 0;
}
