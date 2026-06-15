#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int size = 10000000;
    
    clock_t start_m = clock();
    int *arr_m = (int *)malloc(size * sizeof(int));
    clock_t end_m = clock();

    clock_t start_c = clock();
    int *arr_c = (int *)calloc(size, sizeof(int));
    clock_t end_c = clock();

    printf("Malloc time: %f sec\n", (double)(end_m - start_m) / CLOCKS_PER_SEC);
    printf("Calloc time: %f sec\n", (double)(end_c - start_c) / CLOCKS_PER_SEC);

    free(arr_m); free(arr_c);
    return 0;
}
