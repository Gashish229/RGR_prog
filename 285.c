#include <stdio.h>

int binary_search(const int *arr, int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Защита от переполнения (left+right)

        if (arr[mid] == target) return mid; // Нашли элемент, возвращаем индекс
        if (arr[mid] < target)  left = mid + 1;
        else                    right = mid - 1;
    }
    return -1; // Элемент не найден
}

int main(void) {
    int sorted_data[] = {2, 5, 8, 12, 23, 42};
    int index = binary_search(sorted_data, 6, 12);
    printf("Индекс элемента: %d\n", index); // Выведет 3
    return 0;
}
