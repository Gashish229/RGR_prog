#include <stdio.h>
#define SWAP(T, a, b) do { T temp = a; a = b; b = temp; } while(0)

int main() {
    float x = 1.5, y = 3.5;
    SWAP(float, x, y);
    printf("x = %.1f, y = %.1f\n", x, y);
    return 0;
}
