#include <stdio.h>

int main(void) {
    int a = 5, b = 12, c = 20;
    if (a < b && b < c) {
        printf("Возрастают\n");
    } else {
        printf("Не возрастают\n");
    }
    return 0;
}
