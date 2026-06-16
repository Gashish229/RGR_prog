#include <stdio.h>

typedef struct {
    double x;
    double y;
} Point;

void print_point(const Point *p) {
    printf("Точка(%.2f, %.2f)\n", p->x, p->y);
}

int main() {
    Point a = {5.5, -2.3};
    print_point(&a);
    return 0;
}
