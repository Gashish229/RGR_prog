#include <stdio.h>
#include <math.h>

typedef struct { double x, y; } Point;
typedef struct { Point topLeft, bottomRight; } Rectangle;

double calculate_area(Rectangle r) {
    double width = fabs(r.bottomRight.x - r.topLeft.x);
    double height = fabs(r.topLeft.y - r.bottomRight.y);
    return width * height;
}

int main() {
    Rectangle rect = {{-2.0, 5.0}, {3.0, 1.0}};
    printf("Площадь: %.2f\n", calculate_area(rect));
    return 0;
}
