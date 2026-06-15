#include <stdio.h>

// Модификатор const указывает, что данные по адресу изменять запрещено
void print_array(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        // arr[i] = 0; // ОШИБКА КОМПИЛЯЦИИ: assignment of read-only location
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int numbers[] = {10, 20, 30};
    print_array(numbers, 3);
    return 0;
}
