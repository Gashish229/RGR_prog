#include <stdio.h>
#include <math.h>

int main() {
    float a = 0.1f * 3.0f;
    float b = 0.3f;
    float epsilon = 1e-5f; // Погрешность

    if (fabs(a - b) < epsilon) {
        printf("Числа равны с учетом погрешности\n");
    } else {
        printf("Числа не равны\n");
    }
    return 0;
}
