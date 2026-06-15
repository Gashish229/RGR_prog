#include <stdio.h>

struct Data { int id; float val; };

int main() {
    struct Data d;
    FILE *file = fopen("struct.bin", "rb");
    if (file != NULL) {
        fread(&d, sizeof(struct Data), 1, file);
        printf("Прочитано: id=%d, val=%.1f\n", d.id, d.val);
        fclose(file);
    }
    return 0;
}
