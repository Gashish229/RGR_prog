#include <stdio.h>

int compare_less(int a, int b) { return a < b; }

int find_min_index(int *arr, int size, int (*cmp)(int, int)) {
    int min_idx = 0;
    for (int i = 1; i < size; i++) {
        if (cmp(arr[i], arr[min_idx])) {
            min_idx = i;
        }
    }
    return min_idx;
}

int main() {
    int arr[] = {8, 3, 9, 1, 5};
    int idx = find_min_index(arr, 5, compare_less);
    printf("Минимальный элемент: %d по индексу %d\n", arr[idx], idx);
    return 0;
}
