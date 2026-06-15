#include <stdio.h>
#include <stdlib.h>

int *extract_unique(const int *src, int size, int *res_size) {
    int *temp = (int *)malloc(size * sizeof(int));
    if (temp == NULL) return NULL;
    int k = 0;

    for (int i = 0; i < size; i++) {
        int is_unique = 1;
        for (int j = 0; j < k; j++) {
            if (src[i] == temp[j]) { is_unique = 0; break; }
        }
        if (is_unique) temp[k++] = src[i];
    }
    
    *res_size = k;
    // Оптимизируем выделенную память под точный финальный размер
    return (int *)realloc(temp, k * sizeof(int));
}

int main(void) {
    int original[] = {4, 2, 4, 3, 2};
    int uniq_size;
    int *uniq_arr = extract_unique(original, 5, &uniq_size);

    if (uniq_arr != NULL) {
        printf("Уникальных элементов: %d, первый: %d\n", uniq_size, uniq_arr[0]);
        free(uniq_arr);
    }
    return 0;
}
