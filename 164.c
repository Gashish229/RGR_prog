#include <stdio.h>
#include <stdlib.h> // Нужно для rand()

int main(void) {
    int arr[5];
    int size = 5;

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10; // Случайные числа от 0 до 9
    }

    for (int i = 0; i < size; i++) {
        int is_unique = 1;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
