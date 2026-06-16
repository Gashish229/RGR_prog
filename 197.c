#include <stdio.h>

#define SWAP_T(T, a, b) do { \
    T tmp = (a); \
    (a) = (b); \
    (b) = tmp; \
} while(0)

int main() {
    float a = 1.5f, b = 3.5f;
    SWAP_T(float, a, b);
    printf("a = %.1f, b = %.1f\n", a, b);
    return 0;
}
