#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 3;
    int **mat = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) mat[i] = (int *)malloc(cols * sizeof(int));
    
    // Сначала освобождаем каждую строку!
    for (int i = 0; i < rows; i++) {
        free(mat[i]);
    }
    // Затем освобождаем массив указателей
    free(mat);
    printf("Память 2D массива успешно освобождена.\n");
    return 0;
}
