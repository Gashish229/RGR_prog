#include <stdio.h>

int compare(int a, int b) { return a - b; }

int find_min_idx(int *arr, int size, int (*cmp)(int, int)) {
    int min_idx = 0;
    for (int i = 1; i < size; i++) {
        if (cmp(arr[i], arr[min_idx]) < 0) { // Кастомное сравнение
            min_idx = i;
        }
    }
    return min_idx;
}

int main(void) {
    int array[] = {15, 4, 23, 8};
    int idx = find_min_idx(array, 4, compare);
    printf("Индекс минимального: %d\n", idx); // Выведет 1 (число 4)
    return 0;
}
