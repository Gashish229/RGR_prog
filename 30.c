#include <stdio.h>

int main() {
    // unsigned char вмещает значения от 0 до 255
    unsigned char max_val = 255; 
    max_val = max_val + 1; // Переполнение
    
    printf("Значение после переполнения: %d\n", max_val); // Выведет 0
    return 0;
}
