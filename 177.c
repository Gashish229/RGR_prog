#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 4;
    // Массив указателей на строки
    int **mat = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        mat[i] = (int *)malloc(cols * sizeof(int)); // Выделение строк
    }
    
    mat[1][2] = 42;
    printf("Элемент [1][2]: %d\n", mat[1][2]);
    return 0; // Освобождение в следующей задаче
}
