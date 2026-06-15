#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareStrings(const void *a, const void *b) {
    // a и b - указатели на элементы массива (которые сами являются указателями на char)
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    const char *arr[] = {"Banana", "Apple", "Orange", "Mango"};
    int n = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, n, sizeof(const char *), compareStrings);

    for (int i = 0; i < n; i++) printf("%s ", arr[i]);
    return 0;
}
