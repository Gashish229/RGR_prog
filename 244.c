#include <stdio.h>
#include <stdlib.h>

int *filter_even(const int *src, int size, int *result_size) {
    int even_count = 0;
    for (int i = 0; i < size; i++) {
        if (src[i] % 2 == 0) even_count++;
    }

    if (even_count == 0) { *result_size = 0; return NULL; }

    int *filtered = (int *)malloc(even_count * sizeof(int));
    if (filtered == NULL) return NULL;

    int k = 0;
    for (int i = 0; i < size; i++) {
        if (src[i] % 2 == 0) {
            filtered[k++] = src[i];
        }
    }
    *result_size = even_count;
    return filtered;
}

int main(void) {
    int source_arr[] = {1, 2, 3, 4, 5, 6};
    int res_size;
    int *evens = filter_even(source_arr, 6, &res_size);

    if (evens != NULL) {
        printf("Четных чисел найдено: %d, первое число: %d\n", res_size, evens[0]);
        free(evens);
    }
    return 0;
}
