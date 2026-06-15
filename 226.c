#include <stdio.h>
#include <stdlib.h> // Обязательно для malloc и free

int main(void) {
    int size = 10;
    // Запрос 40 байт в Куче (Heap)
    int *arr = (int *)malloc(size * sizeof(int));

    // Проверка дескриптора на NULL во избежание Segmentation Fault
    if (arr == NULL) return 1;

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);    // Возврат памяти операционной системе
    arr = NULL;   // Зануление dangling-указателя
    return 0;
}
