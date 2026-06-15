#include <stdio.h>
#include <stdlib.h>

// Компаратор для qsort
int compareInt(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {40, 10, 100, 90, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    qsort(arr, n, sizeof(int), compareInt);
    
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
