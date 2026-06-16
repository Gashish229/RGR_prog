#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 10, y = 20;
    printf("Максимум: %d\n", MAX(x, y));
    return 0;
}
