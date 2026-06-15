#include <stdio.h>

int main(void) {
    int speed = 70;
    int is_rain = 1;

    if ((speed > 60 && is_rain) || speed > 90) {
        printf("Нарушение режима безопасности\n");
    }
    return 0;
}
