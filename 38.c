#include <stdio.h>
#include <math.h>

int main() {
    float inf = 1.0f / 0.0f;
    float nan = sqrt(-1.0f);
    printf("Бесконечность (Infinity): %f\n", inf);
    printf("Не число (NaN): %f\n", nan);
    return 0;
}
