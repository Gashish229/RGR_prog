#include <stdio.h>
#include <stdbool.h> // Обязательно для стандартов C99/C11 

#define MAX_VALUE 100 // Препроцессор заменит этот токен на 100 во всем коде 

int main(void) {
    bool flag = true; 
    int limit = MAX_VALUE;

    if (flag) {
        printf("Флаг истинен. Значение константы MAX_VALUE: %d\n", limit);
    } else {
        printf("Флаг ложен.\n");
    }
    return 0;
}