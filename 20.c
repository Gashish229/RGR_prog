#include <stdio.h>

// Определяем тип перечисления Color 
typedef enum {
    RED,   // 0
    GREEN, // 1
    BLUE   // 2
} Color;

int main(void) {
    Color shirt_color = GREEN; // Объявляем переменную и присваиваем значение

    // Вывод на экран (enum выводится как обычное целое число) 
    printf("Номер выбранного цвета в enum: %d\n", shirt_color); // Выведет 1
    return 0;
}