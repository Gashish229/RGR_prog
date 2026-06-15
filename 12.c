#include <stdio.h>

extern int shared_weight; // Объявление: переменная живет в другом модуле 

int main(void) {
    printf("Значение extern переменной: %d\n", shared_weight);
    return 0;
}