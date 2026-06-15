#include <stdio.h>

int main(void) {
    int arr[] = {3, 14, 1, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0]; // Предполагаем, что 0-й элемент максимальный
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Перезаписываем максимум
        }
    }

    printf("Максимальный элемент: %d\n", max);
    return 0;
}
