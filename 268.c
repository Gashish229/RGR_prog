#include <stdio.h>

int main() {
    FILE *src = fopen("source.txt", "rb");
    FILE *dst = fopen("dest.txt", "wb");
    if (!src || !dst) return 1;
    
    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }
    
    fclose(src);
    fclose(dst);
    return 0;
}
