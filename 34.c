#include <stdio.h>

int main() {
    int i = 10;
    do {
        printf("Выполнение цикла. i = %d\n", i);
        i++;
    } while (i < 5); // Условие ложно, но цикл сработает 1 раз
    return 0;
}
