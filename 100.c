#include <stdio.h>

int main() {
    printf(" x | y\n");
    printf("---+---\n");
    for (int x = -5; x <= 5; x++) {
        printf("%2d | %d\n", x, 2 * x + 3);
    }
    return 0;
}
