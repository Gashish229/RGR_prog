#include <stdio.h>

// Функция принимает чистый указатель на оригинал данных
void double_elements(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2; // Модификация памяти оригинала
    }
}

int main(void) {
    int numbers[] = {1, 2, 3};
    double_elements(numbers, 3); // Имя массива является адресом его начала

    printf("Измененный элемент: %d\n", numbers[0]); // Выведет 2
    return 0;
}
