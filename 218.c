#include <stdio.h>
#include <stdlib.h> // Обязательный заголовок для malloc и free

int main(void) {
    int n = 5;
    // Запрашиваем кусок памяти на 20 байт в Куче (Heap)
    int *arr = (int *)malloc(n * sizeof(int));

    // ОБЯЗАТЕЛЬНО: Проверка на NULL
    if (arr == NULL) {
        return 1; // Куча переполнена, ОС отказала в выделении
    }

    arr[0] = 100;
    printf("arr[0] = %d\n", arr[0]);

    free(arr); // Возвращаем системный ресурс
    arr = NULL;
    return 0;
}
