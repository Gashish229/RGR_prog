#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size = 3;
    // calloc принимает два аргумента: количество элементов и их размер в байтах
    int *clean_arr = (int *)calloc(size, sizeof(int));
    if (clean_arr == NULL) return 1;

    // Гарантированно выведет нули, так как calloc очищает память
    printf("Элементы calloc: %d %d %d\n", clean_arr[0], clean_arr[1], clean_arr[2]);

    free(clean_arr);
    return 0;
}
