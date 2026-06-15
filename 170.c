#include <stdio.h>

int main(void) {
    int item = 777;
    int *p = &item; // Логируем адрес переменной item

    // *p — разыменование (значение), p — сам адрес
    printf("Значение переменной: %d\n", *p);
    printf("Адрес ячейки ОЗУ: %p\n", (void*)p);
    return 0;
}
