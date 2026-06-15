#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows = 3;
    int cols = 4;

    // 1. Выделяем массив указателей на строки матрицы
    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL) return 1;

    // 2. Для каждого указателя выделяем физический одномерный массив int
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) return 1; // В реальном коде нужен откат очистки
    }

    // Заполнение и вывод
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i * cols + j;
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // 3. Освобождение памяти в строго ОБРАТНОМ порядке
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    matrix = NULL;
    return 0;
}
