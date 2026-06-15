#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        if (i == 3) continue; // Пропуск итерации, переход к шагу i++
        if (i == 6) break;    // Полная остановка цикла
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
