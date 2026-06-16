#include <stdio.h>

typedef struct { int id; float value; } Record;

int main() {
    Record out = {1, 99.9}, in = {0, 0};
    
    FILE *fw = fopen("struct.bin", "wb");
    fwrite(&out, sizeof(Record), 1, fw);
    fclose(fw);
    
    FILE *fr = fopen("struct.bin", "rb");
    fread(&in, sizeof(Record), 1, fr);
    fclose(fr);
    return 0;
}
