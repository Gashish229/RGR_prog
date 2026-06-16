#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    FILE *file = fopen(argv[1], "r");
    if (!file) return 1;
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    return 0;
}
