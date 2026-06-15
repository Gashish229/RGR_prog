#include <stdio.h>
#include "header.h"
#include "header.h" // Повторное включение будет проигнорировано компилятором

int main(void) {
    Point p = {10, 20};
    printf("Point: %d, %d\n", p.x, p.y);
    return 0;
}
