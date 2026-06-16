#include <stdio.h>

int main() {
    FILE *file = fopen("data.bin", "rb");
    if (!file) return 1;
    unsigned char ch;
    while (fread(&ch, 1, 1, file) == 1) {
        printf("%02X ", ch);
    }
    printf("\n");
    fclose(file);
    return 0;
}
