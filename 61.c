#include <stdio.h>

int main(void) {
    float x = 3.0f, y = 4.0f;
    float radius = 5.0f;

    if ((x * x + y * y) <= (radius * radius)) {
        printf("Внутри\n");
    } else {
        printf("Вне\n");
    }
    return 0;
}
