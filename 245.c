#include <stdlib.h>
#include <stdio.h>

int main(void) {
    // Намеренно выделяем память и "забываем" вызвать free() для демонстрации утечки
    int *leak_array = (int *)malloc(5 * sizeof(int));
    if (leak_array == NULL) return 1;

    leak_array[0] = 99;
    printf("Данные записаны, но свободная очистка free() пропущена.\n");

    // free(leak_array); // Закомментировано умышленно
    return 0;
}
