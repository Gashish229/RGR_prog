#include <stdio.h>

struct Point { int x, y; };

int main() {
    struct Point pts[3] = {{1, 1}, {2, 2}, {3, 3}};
    FILE *file = fopen("points.bin", "wb");
    if (file != NULL) {
        fwrite(pts, sizeof(struct Point), 3, file);
        fclose(file);
    }
    return 0;
}
