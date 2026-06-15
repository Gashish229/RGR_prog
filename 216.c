#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) return 1;

    *ptr = 50;
    free(ptr); // Память в куче возвращена операционной системе

    // Критическая ошибка: Неопределенное поведение (Dangling pointer)
    printf("Данные по адресу: %d\n", *ptr); 
    return 0;
}
