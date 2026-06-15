#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 2, cols = 3;
    int **mat = malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) mat[i] = malloc(cols * sizeof(int));
    
    // Инициализация
    mat[0][0] = 1; mat[0][1] = 2; mat[0][2] = 3;
    mat[1][0] = 4; mat[1][1] = 5; mat[1][2] = 6;

    // Выделение памяти под транспонированную
    int **trans = malloc(cols * sizeof(int*));
    for (int i = 0; i < cols; i++) trans[i] = malloc(rows * sizeof(int));

    // Транспонирование
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) trans[j][i] = mat[i][j];
    }
    
    printf("Элемент [2][1] новой матрицы: %d\n", trans[2][1]); // 6
    // Очистка памяти опущена для краткости
    return 0;
}
