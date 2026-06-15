#include <stdio.h>

struct Data { int id; float val; };

int main() {
    struct Data d1 = {1, 99.5f};
    FILE *file = fopen("struct.bin", "wb");
    if (file != NULL) {
        fwrite(&d1, sizeof(struct Data), 1, file);
        fclose(file);
        printf("Структура записана.\n");
    }
    return 0;
}
