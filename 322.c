#include <stdio.h>

// Логический макрос (круглые скобки для каждого аргумента обязательны во избежание побочных эффектов)
#define IN_RANGE(val, min, max) (((val) >= (min)) && ((val) <= (max)))

int main(void) {
    int score = 85;
    if (IN_RANGE(score, 1, 100)) {
        printf("Значение входит в диапазон [1; 100]\n");
    }
    return 0;
}
