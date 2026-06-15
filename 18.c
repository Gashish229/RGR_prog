#include <stdio.h>

int main(void) {
    int arr[] = {1, 3, 5, 7, 9, 11}; // Массив из 6 элементов (6 * 4 байта = 24 байта)
    
    // 24 байта / 4 байта (размер нулевого элемента) = 6 элементов 
    size_t count = sizeof(arr) / sizeof(arr[0]);

    printf("Количество элементов массива: %zu\n", count);
    return 0;
}