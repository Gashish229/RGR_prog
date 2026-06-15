#include <stdio.h>

int main(void) {
    int value = 10;
    printf("Внешнее значение: %d\n", value); // 10

    {
        // Изолированная блочная область видимости
        int value = 55; 
        printf("Значение внутри блока {}: %d\n", value); // 55
    }

    printf("Внешнее после блока: %d\n", value); // Снова 10
    return 0;
}
