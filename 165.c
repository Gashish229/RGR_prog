#include <stdio.h>

int find_second_max(int *arr, int size) {
    int max = arr[0];
    int second_max = -999999; // Условное минимальное значение

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            second_max = max; // Старый максимум становится вторым
            max = arr[i];     // Обновляем абсолютный максимум
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }
    return second_max;
}

int main(void) {
    int numbers[] = {10, 5, 20, 20, 15};
    printf("Второй максимум: %d\n", find_second_max(numbers, 5)); // Выведет 15
}
