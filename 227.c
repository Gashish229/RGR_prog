#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int sum = 0;

    printf("Введите размер массива: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) return 1;

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Случайные числа от 0 до 99
        sum += arr[i];
    }

    printf("Сумма элементов: %d\n", sum);

    free(arr);
    arr = NULL;
    return 0;
}
