#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size = 3;
    int **ptr_arr = (int **)malloc(size * sizeof(int *));
    if (ptr_arr == NULL) return 1;

    for (int i = 0; i < size; i++) {
        ptr_arr[i] = (int *)malloc(sizeof(int));
        if (ptr_arr[i] != NULL) {
            *(ptr_arr[i]) = (i + 1) * 111; // Разыменовываем конкретный указатель
        }
    }

    for (int i = 0; i < size; i++) {
        if (ptr_arr[i] != NULL) {
            printf("Значение: %d\n", *(ptr_arr[i]));
            free(ptr_arr[i]); // Снос изолированных ячеек int
        }
    }
    free(ptr_arr); // Снос базового массива адресов
    ptr_arr = NULL;
    return 0;
}
