#include <stdio.h>
#include <stdlib.h>

int *expand_and_zero(int *arr, int current_size, int *new_size) {
    *new_size = current_size + 10;
    // Безопасное перевыделение памяти через промежуточный temp-указатель
    int *temp = (int *)realloc(arr, (*new_size) * sizeof(int));
    if (temp == NULL) return arr; // Если куча переполнена, сохраняем старый массив

    // Зануление строго добавленного фрагмента ОЗУ
    for (int i = current_size; i < *new_size; i++) {
        temp[i] = 0;
    }
    return temp;
}

int main(void) {
    int *data = (int *)malloc(3 * sizeof(int));
    if (data == NULL) return 1;
    data[0] = 5; data[1] = 6; data[2] = 7;

    int updated_size;
    data = expand_and_zero(data, 3, &updated_size);

    printf("Размер: %d, Элемент 5: %d\n", updated_size, data[5]); // Выведет 0
    free(data);
    return 0;
}
