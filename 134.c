#include <stdio.h>

void counterFunc() {
    static int count = 0; // Инициализируется только один раз
    count++;
    printf("Вызов функции: %d раз\n", count);
}

int main() {
    counterFunc(); // Вызов: 1 раз
    counterFunc(); // Вызов: 2 раз
    counterFunc(); // Вызов: 3 раз
    return 0;
}
