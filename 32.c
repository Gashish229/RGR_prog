#include <stdio.h>

int main() {
    float f = 1.0f / 3.0f;
    double d = 1.0 / 3.0;
    printf("Float (обычно 7 знаков):  %.15f\n", f);
    printf("Double (обычно 15 знаков): %.15lf\n", d);
    return 0;
}
