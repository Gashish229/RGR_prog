#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 3;
    // Выделяет память под n элементов по 4 байта каждый
    int *arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL) return 1;

    // Гарантированно выведет 0, так как calloc очищает память
    printf("arr[2] = %d\n", arr[2]); 

    free(arr);
    arr = NULL;
    return 0;
}
