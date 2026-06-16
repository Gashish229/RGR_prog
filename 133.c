#include <stdio.h>

int main() {
    FILE *in = fopen("source.txt", "rb");
    FILE *out = fopen("encrypted.txt", "wb");
    if (!in || !out) return 1;
    
    char key = 0x5A; // Ключ шифрования
    int c;
    while ((c = fgetc(in)) != EOF) {
        fputc(c ^ key, out);
    }
    
    fclose(in);
    fclose(out);
    return 0;
}
