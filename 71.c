#include <stdio.h>

int main(void) {
    int a = 10, b = 25, c = 15;
    int max;

    if (a > b && a > c) {
        max = a;
    } else if (b > c) {
        max = b;
    } else {
        max = c;
    }
    printf("Max: %d\n", max);
    return 0;
}
