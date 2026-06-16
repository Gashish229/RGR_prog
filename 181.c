#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

double calculate_distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Point a = {0.0, 0.0}, b = {3.0, 4.0};
    printf("Расстояние: %.2f\n", calculate_distance(a, b));
    return 0;
}
