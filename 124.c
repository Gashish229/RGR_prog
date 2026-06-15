#include <stdio.h>

int main(void) {
    FILE *src = fopen("source.txt", "r");
    if (src == NULL) return 1;

    FILE *dest = fopen("destination.txt", "w");
    if (dest == NULL) {
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest); // Побайтовое копирование
    }

    fclose(src);
    fclose(dest);
    return 0;
}
