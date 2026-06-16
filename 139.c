#include <stdio.h>

int find_max(int *arr, int size) {
    int max = *arr;
    for (int *p = arr + 1; p < arr + size; p++) {
        if (*p > max) max = *p;
    }
    return max;
}

int main() {
    int arr[] = {4, 1, 9, 3, 7};
    printf("Максимум: %d\n", find_max(arr, 5));
    return 0;
}
