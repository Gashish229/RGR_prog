#include <stdio.h>

typedef int MyInt; // Создаем официальный синоним типа int 

int main(void) {
    MyInt val = 256; // Объявление переменной через новый псевдоним 
    printf("Значение типа MyInt: %d\n", val);
    return 0;
}