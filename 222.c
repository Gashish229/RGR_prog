#include <stdio.h>
#include <stdlib.h>

int *create_dynamic_array(int size) {
    int *new_arr = (int *)malloc(size * sizeof(int));
    if (new_arr == NULL) return NULL;

    for (int i = 0; i < size; i++) new_arr[i] = (i + 1) * 10;
    return new_arr; // Возвращаем адрес начала блока в куче
}

int main(void) {
    int *my_array = create_dynamic_array(3);
    
    if (my_array != NULL) {
        printf("my_array[1] = %d\n", my_array[1]); // Выведет 20
        free(my_array); // Освобождаем память в main
        my_array = NULL;
    }
    return 0;
}
