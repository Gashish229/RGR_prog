#include <stdio.h>

void append_file(FILE *dest, const char *src_name) {
    FILE *src = fopen(src_name, "r");
    if (!src) return;
    int ch;
    while ((ch = fgetc(src)) != EOF) fputc(ch, dest);
    fclose(src);
}

int main() {
    FILE *out = fopen("output.txt", "w");
    if (!out) return 1;
    append_file(out, "file1.txt");
    append_file(out, "file2.txt");
    fclose(out);
    return 0;
}
