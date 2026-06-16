#include <stdio.h>
#include <stdbool.h>

typedef struct { double x, y; } Point;
typedef struct { Point topLeft, bottomRight; } Rectangle;

bool is_intersect(Rectangle r1, Rectangle r2) {
    // Если один прямоугольник левее другого
    if (r1.topLeft.x > r2.bottomRight.x || r2.topLeft.x > r1.bottomRight.x) return false;
    // Если один прямоугольник выше другого
    if (r1.bottomRight.y > r2.topLeft.y || r2.bottomRight.y > r1.topLeft.y) return false;
    return true;
}

int main() {
    Rectangle r1 = {{0, 10}, {10, 0}};
    Rectangle r2 = {{5, 15}, {15, 5}};
    printf("Пересекаются: %s\n", is_intersect(r1, r2) ? "Да" : "Нет");
    return 0;
}
