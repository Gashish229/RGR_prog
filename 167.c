#include <stdio.h>

int remove_elements(int *arr, int size, int target) {
    int new_size = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != target) {
            arr[new_size] = arr[i]; // Сдвигаем элементы влево
            new_size++;
        }
    }
    return new_size; // Возвращаем новый логический размер
}

int main(void) {
    int arr[] = {2, 3, 2, 5, 2};
    int size = 5;
    size = remove_elements(arr, size, 2); // Новый размер станет равен 2

    for (int i = 0; i < size; i++) printf("%d ", arr[i]); // Выведет: 3 5
    printf("\n");
}
