#include <stdio.h>
#define PI 3.14159265
#define CIRCLE_AREA(r) (PI * (r) * (r))

int main() {
    double radius = 5.0;
    printf("Площадь: %.2f\n", CIRCLE_AREA(radius));
    return 0;
}
