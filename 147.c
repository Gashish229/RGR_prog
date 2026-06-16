#include <stdio.h>
#include <stdlib.h>

int* create_array(int size) {
    int *arr = (int*)malloc(size * sizeof(int));
    if (arr) {
        for (int i = 0; i < size; i++) arr[i] = i * 10;
    }
    return arr;
}

int main() {
    int *my_arr = create_array(5);
    for (int i = 0; i < 5; i++) printf("%d ", my_arr[i]);
    free(my_arr);
    return 0;
}
