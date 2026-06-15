#include <stdio.h>
#include <stdlib.h>

int compareInt(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {10, 20, 25, 40, 90, 100}; // Массив должен быть отсортирован
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 40;
    
    int *item = (int*)bsearch(&key, arr, n, sizeof(int), compareInt);
    
    if (item != NULL) {
        printf("Элемент %d найден по индексу %ld\n", key, item - arr);
    } else {
        printf("Элемент не найден\n");
    }
    return 0;
}
