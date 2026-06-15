#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *arr = (int *)malloc(2 * sizeof(int));
    if (arr == NULL) return 1;

    // Перевыделяем память до размера 4 элементов
    int *temp = (int *)realloc(arr, 4 * sizeof(int));
    if (temp == NULL) {
        free(arr); // Если расширить не удалось, старый блок надо очистить
        return 1;
    }
    arr = temp; // Переназначаем указатель на безопасный новый адрес

    free(arr);
    return 0;
}
