#include <stdio.h>

int has_duplicates(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) return 1; // Повтор найден
        }
    }
    return 0;
}

int main(void) {
    int data[] = {1, 5, 3, 5, 8};
    printf("Есть дубликаты: %s\n", has_duplicates(data, 5) ? "Да" : "Нет");
    return 0;
}
