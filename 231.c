#include <stdio.h>
#include <stdlib.h>

int *copy_array(const int *src, int size) {
    if (src == NULL || size <= 0) return NULL;

    int *dest = (int *)malloc(size * sizeof(int));
    if (dest == NULL) return NULL;

    for (int i = 0; i < size; i++) {
        dest[i] = src[i]; // Поэлементное копирование двоичных сеток
    }
    return dest;
}

int main(void) {
    int arr[] = {10, 20, 30};
    int *copy = copy_array(arr, 3);

    if (copy != NULL) {
        printf("Элемент копии: %d\n", copy[1]);
        free(copy);
        copy = NULL;
    }
    return 0;
}
