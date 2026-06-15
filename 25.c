#include <stdio.h>

int main(void) {
    int a = 42;
    int *p = &a; // Записываем адрес переменной a в указатель p [cite: 496]

    printf("ДО:    a = %d, *p = %d\n", a, *p);

    *p = 99; // Заходим по адресу в p и перезаписываем ячейку памяти значением 99 

    printf("ПОСЛЕ: a = %d, *p = %d\n", a, *p);
    return 0;
}