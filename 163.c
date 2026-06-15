#include <stdio.h>

int main(void) {
    int arr[] = {5, 12, 7, 20, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 20;
    int found_index = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found_index = i; // Нашли совпадение
            break;
        }
    }

    printf("Индекс элемента: %d\n", found_index);
    return 0;
}
